#include "Cultural.h"
using namespace std;

Cultural::Cultural(string _nombre, string _tipo, string _fecha, string _duracion, string _ubicacion, string _artista) : 
Evento(_nombre, _tipo, _duracion,_ubicacion, _fecha){

    this -> artista = _artista;
}

string Cultural::getArtista(){
    return artista;
}
void Cultural::setArtista(string _artista){
    artista = _artista;
}