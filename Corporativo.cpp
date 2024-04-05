#include "Corporativo.h"
using namespace std;

Corporativo::Corporativo(string _nombre, string _tematica, string _tipo, string _duracion, string _ubicacion, string _fecha) : 
Evento(  _nombre, _tipo,  _duracion, _ubicacion, _fecha) {
    
    this -> tematica = _tematica;
}

string Corporativo::getTematica(){
    return tematica;
}
void Corporativo::setTematica(string _tematica){
    tematica = _tematica;
}
string Corporativo :: to_string(){
    return tematica;
}