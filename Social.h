#pragma once
#include <iostream>
#include "Evento.h"
using namespace std;

class Social : public Evento{
    private:
    string proposito;
    public:
    Social(string _nombre, string tipo, string fecha, string duracion, string ubicacion, string proposito);
    string getProposito();
    void setProposito(string _proposito);
};