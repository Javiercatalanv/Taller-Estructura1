#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Corporativo : public Evento{
    private:
    string tematica;
    public:
    Corporativo(string _nombre, string _tematica, string _tipo, string _duracion, string _ubicacion, string _fecha);
    string getTematica();
    void setTematica(string _tematica);
    string to_string();
};