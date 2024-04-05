#include "Evento.h"
using namespace std;

Evento::Evento(string _nombre, string _tipo, string _duracion, string _ubicacion, string _fecha){
    this -> tipo = _tipo;
    this -> duracion = _duracion;
    this -> ubicacion = _ubicacion;
    this -> fecha = _fecha;
    this -> nombre = _nombre;
}

string Evento::getTipo(){
    return tipo;
}

string Evento::getDuracion(){
    return duracion;
}

string Evento::getUbicacion(){
    return ubicacion;
}

string Evento::getFecha(){
    return fecha;
}

string Evento::getNombre(){
    return nombre;
}

void Evento::setTipo(string _tipo){
    tipo = _tipo;
}

void Evento::setDuracion(string _duracion){
    duracion = _duracion;
}

void Evento::setUbicacion(string _ubicacion){
    ubicacion = _ubicacion;
}

void Evento::setFecha(string _fecha){
    fecha = _fecha;
}

void Evento::setNombre(string _nombre){
    nombre = _nombre;
}

string Evento::to_string(){
    string text;
    text = tipo + "," + duracion + ","+ ubicacion + ","+ fecha;
    return text;
}

void Evento::agregarInvitado(Persona* p){
    asistentes.push_back(p);
}

string Evento::obtenerInvitado(){
    string invitados = "";
    for(int i = 0 ; i < asistentes.size(); i++){
        invitados += asistentes[i] ->tostring() + "\n";
    }
    return invitados;
}