#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "Evento.cpp"
#include "Persona.cpp"
#include "Corporativo.cpp"
#include "Cultural.cpp"
#include "Educativo.cpp"
#include "Social.cpp"
using namespace std;
vector<Evento*> cantidadEventos;

void eventoCorporativo(string nombre,string fecha, string duracion, string ubi, string tipo){
    string _tematica;
    
    cout << "Perfecto, ahora ingresa los siguientes datos para crear un Evento Corporativo:" << "\n";
    cout << "Ingrese primero la fecha en que se desarrollara el evento: " << "\n";
    cin >> fecha;
    cout << "Ingrese la duracion del evento en horas: " << "\n";
    cin >> duracion;
    cout << "Ingrese la ubicacion del evento:" << "\n";
    cin >> ubi;
    cout << "Ingrese el tipo del evento: " << "\n";
    cin >> tipo;
    cout << "Ingrese el tema del evento: " << "\n";
    cin >> _tematica;
    cout << "Ingrese el nombre del evento: \n";
    cin >> nombre; 

    Corporativo* cor = new Corporativo(nombre,_tematica,tipo,duracion,ubi,fecha);
    cantidadEventos.push_back(cor);

}

void eventoCultural(string nombre, string fecha, string duracion, string ubi, string tipo){
    string _artista;
    cout << "Perfecto, ahora ingresa los siguientes datos para crear un Evento Cultural:" << "\n";
    cout << "Ingrese primero la fecha en que se desarrollara el evento: " << "\n";
    cin >> fecha;
    cout << "Ingrese la duracion del evento en horas: " << "\n";
    cin >> duracion;
    cout << "Ingrese la ubicacion del evento:" << "\n";
    cin >> ubi;
    cout << "Ingrese el tipo del evento: " << "\n";
    cin >> tipo;
    cout << "Ingrese la tematica del evento: " << "\n";
    cin >> _artista;
    cout << "Ingrese el nombre de evento: \n";
    cin >> nombre;

    Cultural* cul = new Cultural(nombre,tipo,fecha, duracion, ubi, _artista);
    cantidadEventos.push_back(cul);
}

void eventoEducativo(string nombre, string fecha, string duracion, string ubi, string tipo){
    string _tema;
    
    cout << "Perfecto, ahora ingresa los siguientes datos para crear un Evento Educativo:" << "\n";
    cout << "Ingrese primero la fecha en que se desarrollara el evento: " << "\n";
    cin >> fecha;
    cout << "Ingrese la duracion del evento en horas: " << "\n";
    cin >> duracion;
    cout << "Ingrese la ubicacion del evento:" << "\n";
    cin >> ubi;
    cout << "Ingrese el tipo del evento: " << "\n";
    cin >> tipo;
    cout << "Ingrese la tematica del evento: " << "\n";
    cin >> _tema;
    cout << "Ingrese el nombre del evento: \n";
    cin >> nombre;
    
    Educativo* edu = new Educativo(nombre, tipo,fecha,duracion,ubi,_tema);
    cantidadEventos.push_back(edu);

}

void eventoSocial(string nombre, string fecha, string duracion, string ubi, string tipo){
    string _proposito;
    
    cout << "Perfecto, ahora ingresa los siguientes datos para crear un Evento Social:" << "\n";
    cout << "Ingrese primero la fecha en que se desarrollara el evento: " << "\n";
    cin >> fecha;
    cout << "Ingrese la duracion del evento en horas: " << "\n";
    cin >> duracion;
    cout << "Ingrese la ubicacion del evento:" << "\n";
    cin >> ubi;
    cout << "Ingrese el tipo del evento: " << "\n";
    cin >> tipo;
    cout << "Ingrese la tematica del evento: " << "\n";
    cin >> _proposito;
    cout << "Ingrese el nombre del evento: \n";
    cin >> nombre;

    Social* soc = new Social(nombre,tipo,fecha,duracion,ubi,_proposito);
    cantidadEventos.push_back(soc);

}

void crearEvento(){
    string fecha;
    string duracion;
    string ubi;
    string tipo;
    string nombre;
    int numero;

    cout << "Para crear un evento, primero seleccione su tipo: " << "\n";
    cout << "1. Evento Corporativo." << "\n";
    cout << "2. Evento Cultural." << "\n";
    cout << "3. Evento Educativo. " << "\n";
    cout << "4. Evento Social. " << "\n";
    cin >> numero;

    while(numero < 1 || numero > 4){
        cout << "Porfavor, ingrese un evento valido. " << "\n";
        cout << "1. Evento Corporativo." << "\n";
        cout << "2. Evento Cultural." << "\n";
        cout << "3. Evento Educativo. " << "\n";
        cout << "4. Evento Social. " << "\n";
        cin >> numero;
    }

    if(numero == 1){
        eventoCorporativo(nombre,fecha,duracion,ubi,tipo);
    }else if(numero == 2){
        eventoCultural(nombre,fecha,duracion,ubi,tipo);
    }else if(numero == 3){
        eventoEducativo(nombre,fecha,duracion,ubi,tipo);
    }else if(numero == 4){
        eventoSocial(nombre,fecha,duracion,ubi,tipo);
    }

    cout << "--------------------------------------------------------------------------" << "\n";
    
}

int buscar(string x){
   
    for(int i = 0 ; i < cantidadEventos.size() ; i++){
        if(cantidadEventos[i] -> getNombre() == x){
            return i;
            break;
        }
    }
    return -1;
}

void registrarAsistentes(){
    string correo;
    string numero;
    string nombre;
    string apellido;
    string eventoBuscar;
    int var;
    int edad;

    cout << "Para agregar un asistente al evento: " << "\n";
    cout << "Ingrese el nombre del evento al que agregara el asistente: " << "\n";
    cout << "> ";
    cin >> eventoBuscar;

    var = buscar(eventoBuscar);

    if( var == -1 ){
        cout << "El evento no esta registrado, porfavor intente nuevamente." << "\n";
    }else{
        cout << "Ingrese el nombre del asistente: " << "\n";
        cout << "> ";
        cin >> nombre;
        cout << "Ingrese el apellido del asistente: " << "\n";
        cout << "> ";
        cin >> apellido;
        cout << "Ingrese la edad del asistente: " << "\n";
        cout << "> ";
        cin >> edad;
        cout << "Ingrese el correo del asistente: " << "\n";
        cout << "> ";
        cin >> correo;
        cout << "Ingrese el numero de telefono del asistente: " << "\n";
        cout << "> ";
        cin >> numero;
        Persona* p = new Persona(nombre, apellido, edad, numero, correo);
        cantidadEventos[var] ->agregarInvitado(p);
    }

}

void consultarAsistentes(){
    string nombre;
    cout << "Para poder obtener la lista de asistentes, ingrese el nombre del evento.\n";
    cout << "> ";
    cin >> nombre;

    int var = buscar(nombre);

    if(var == -1){
        cout << "El evento no se encontro, porfavor vuelve a intentarlo.\n";
    }else{
        cout << "-> " + cantidadEventos[var] -> obtenerInvitado() << "\n";
    }
}

void mostrar(){
    for(int i = 0 ; i < cantidadEventos.size() ; i++){
        cout << (i+1) + ". " + cantidadEventos[i] -> getNombre() << "\n";
    }
}

void mostrarAsistente(){
    for(int i = 0 ; i < cantidadEventos.size() ; i++){
        cout << (i+1) + ". " + cantidadEventos[i] -> getNombre() << "\n";
        cout << cantidadEventos[i] -> obtenerInvitado() << "\n";
    }
}

void mostrarEventosProgramados(){
    cout << "Los eventos agendados son:\n";
    mostrar();
}

void mostrarAsistentesEventos(){
    cout << "Los asistentes por eventos son:\n";
    mostrarAsistente();
}

void generarInformes(){
    int selecto;
    cout << "Por favor, seleccione el informe que desea adquirir.\n";
    cout << "1. Lista de Eventos Programados.\n";
    cout << "2. Lista de Asistentes por Eventos Programados.\n";
    cout << "> ";
    cin >> selecto;

    while(selecto < 1 || selecto > 2){
        if(selecto == 1){
            mostrarEventosProgramados();
        }else if(selecto == 2){
            mostrarAsistentesEventos();
    }
    }
}

vector<string> split(string str, char separador) {

    vector<string> partes;
    stringstream ss(str);
    string parte;

    while (getline(ss, parte, separador)) {
        partes.push_back(parte);
    }

    return partes;
}

void importarDatos(){
    string nombreArchivo = "datos.txt";
    string linea;
    string token;
    ifstream archivo(nombreArchivo);
    istringstream ss(linea);
    
    while (getline(archivo, linea)) {
        char sep = ',';
        vector<string> partes = split(linea , sep);

        if(partes.size() == 6){
            string nombre = partes[0];
            string apellido = partes[1];
            int edad = stoi(partes[2]);
            string numero = partes[3];
            string correo = partes[4];
            string evento = partes[5];

            int var = buscar(evento);
            
            Persona* p = new Persona(nombre, apellido, edad, numero, correo);
            cantidadEventos[var] -> agregarInvitado(p);

        }else if(partes.size() == 7){
            string nombre = partes[0];
            string fecha = partes[1];
            string duracion = partes[2];
            string ubi = partes[3];
            string tipo = partes[4];
            string diferenciador =partes[5];
            string evento = partes[6];

            if(diferenciador == "_tematica"){
                Corporativo* cor = new Corporativo(nombre,diferenciador,tipo,duracion,ubi,fecha);
                cantidadEventos.push_back(cor);
            }else if(diferenciador == "_artista"){
                Cultural* cul = new Cultural(nombre,tipo,fecha, duracion, ubi, diferenciador);
                cantidadEventos.push_back(cul);
            }else if(diferenciador == "_tema"){
                Educativo* edu = new Educativo(nombre, tipo,fecha,duracion,ubi,diferenciador);
                cantidadEventos.push_back(edu);
            }else if(diferenciador == "_proposito"){
                Social* soc = new Social(nombre,tipo,fecha,duracion,ubi,diferenciador);
                cantidadEventos.push_back(soc);
            }

        }
    }
}

void guardarDatos(){
     // Nombre del archivo en el que quieres escribir
    string nombreArchivo = "nuevosDatos.txt";
    
    // Objeto ofstream para escribir en el archivo
    ofstream archivo(nombreArchivo);
    
    // Escribir en el archivo
    for(int i = 0 ; i < cantidadEventos.size() ; i++){
        archivo << cantidadEventos[i]->getNombre()+","+cantidadEventos[i]->getFecha()+","+cantidadEventos[i]->getDuracion()+","+cantidadEventos[i]->getUbicacion()+","+cantidadEventos[i]->getTipo();
        archivo << cantidadEventos[i]->obtenerInvitado();
    }
    
    // Cerrar el archivo después de escribir en él
    archivo.close();
    
}

void menu(){
    int seleccion;
    cout << "Por favor, seleccione una de las siguientes opciones: " << "\n";
    cout << "1. Crear Evento." << "\n";
    cout << "2. Registrar Asistentes." << "\n";
    cout << "3. Consultar Lista Asistentes." << "\n";
    cout << "4. Generar Informes." << "\n";
    cout << "5. Importar datos." << "\n";
    cout << "6. Guardar datos." << "\n";
    cout << "7. Salir." << "\n";
    cout << "> ";
    cin >> seleccion;

    if(seleccion == 1){
        crearEvento();
        menu();
    }else if(seleccion == 2){
        registrarAsistentes();
        menu();
    }else if(seleccion == 3){
        consultarAsistentes();
        menu();
    }else if(seleccion == 4){
        generarInformes();
        menu();
    }else if(seleccion == 5){
        importarDatos();
        menu();
    }else if(seleccion == 6){
        guardarDatos();
        menu();
    }else if(seleccion == 7){
        cout << "   Sesion Finalizada. " << "\n"; 
    }
}

int main(){
    cout << "       Bienvenido al organizador de eventos       " << "\n";
    menu();
}