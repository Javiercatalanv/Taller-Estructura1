#pragma once
#include <iostream>
#include <vector>
#include "persona.h"
using namespace std;

class Evento{
    private:
    string tipo;
    string duracion;
    string ubicacion;
    string fecha;
    string nombre;
    vector<Persona*> asistentes;
    public:
    Evento(string nombre, string tipo, string fecha, string duracion, string ubicacion);
    string getTipo();
    string getDuracion();
    string getUbicacion();
    string getFecha();
    string getNombre();
    void agregarInvitado(Persona* p);
    string obtenerInvitado();
    void setTipo(string _tipo);
    void setDuracion(string _duracion);
    void setUbicacion(string _ubicacion);
    void setFecha(string _fecha);
    void setNombre(string _nombre);
    string to_string();
};