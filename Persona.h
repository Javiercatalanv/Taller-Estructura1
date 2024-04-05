#pragma once
#include <iostream>

using namespace std;

class Persona{
    private:
    string nombre;
    string apellido;
    int edad;
    string numeroTelefonico;
    string correo;
    public:
    Persona(string nombre, string apellido, int edad, string numeroTelefonico, string correo);
    string getNombre();
    string getApellido();
    int getEdad();
    string getNumero();
    string getCorreo();
    void setNombre(string _nombre);
    void setApellido(string _apellido);
    void setEdad(int _edad);
    void setNumero(string _numero);
    void setCorreo(string _correo);
    string tostring();
};