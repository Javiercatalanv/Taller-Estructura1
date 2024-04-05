#include "Educativo.h"
using namespace std;

Educativo :: Educativo(string _nombre, string _tipo, string _fecha, string _duracion, string _ubicacion, string _tematica) :
Evento(_nombre, _tipo, _duracion,_ubicacion, _fecha){
    this->tematica = _tematica;
}
string Educativo::getTematica(){
    return tematica;
}
void Educativo::setTematica(string _tematica){
    tematica =_tematica;
}