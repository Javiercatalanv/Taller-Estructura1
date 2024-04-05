#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Cultural : public Evento{
    private:
    string artista;
    public:
    Cultural(string _nombre, string _tipo, string _fecha, string _duracion, string _ubicacion, string _artista);
    string getArtista();
    void setArtista(string _artista);
};