#include "Social.h"
using namespace std;

Social::Social(string _nombre, string _tipo, string _fecha, string _duracion, string _ubicacion, string _proposito) : 
Evento(_nombre, _tipo, _duracion,_ubicacion, _fecha){
    
    this -> proposito = _proposito;
}
string Social::getProposito(){
    return proposito;
}

void Social::setProposito(string _proposito){
    proposito = _proposito;
}
