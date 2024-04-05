#include "Persona.h"
using namespace std;

Persona::Persona(string _nombre, string _apellido, int _edad ,string _numeroTelefonico, string _correo){
    this -> nombre = _nombre;
    this -> apellido = _apellido;
    this -> edad = _edad;
    this -> numeroTelefonico = _numeroTelefonico;
    this -> correo = _correo;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getApellido(){
    return apellido;
}

int Persona::getEdad(){
    return edad;
}

string Persona::getNumero(){
    return numeroTelefonico;
}

string Persona::getCorreo(){
    return correo;
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

void Persona::setApellido(string _apellido){
    apellido = _apellido;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

void Persona::setNumero(string _numero){
    numeroTelefonico = _numero;
}

void Persona::setCorreo(string _correo){
    correo = _correo;
}

string Persona::tostring(){
    return nombre + "," + apellido + "," + to_string(edad) + "," + numeroTelefonico + "," + correo;
}