#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Educativo : public Evento{
    private:
    string tematica;
    public:
    Educativo(string _nombre, string _tipo, string _fecha, string _duracion, string _ubicacion, string _tematica);
    string getTematica();
    void setTematica(string _tematica);
};