# Taller-Estructura1

Javier Alonso Catalán ; 21.445.807-1 ; javier.catalan01@alumnos.ucn.cl

# Objetos Creados en el main:

Asistentes(6):
asis1:{nombre: "javier", apellido: "catalan", edad: "20", numero: "968067580", correo: "javiercatalan@gmail.com", evento: "progcomp"}

asis2:{nombre: "paula", apellido: "nunez", edad: "21", numero: "9245235625", correo: "paulanunez@gmail.com", evento: "kpop"}

asis3:{nombre: "vicente", apellido: "ruiz", edad: "20", numero: "9811253559", correo: "vicenteruiz@gmail.com", evento: "stream"}

asis4:{nombre: "heu", apellido: "remi", edad: "20", numero: "9694205467", correo: "heuremi@gmail.com", evento: "progcomp"}

asis5:{nombre: "victoria", apellido: "quiroga", edad: "22", numero: "9223461287", correo: "vickyquiroga@gmail.com", evento: "progcomp"}

asis6:{nombre: "fabi", apellido: "ven", edad: "29", numero: "9886702124", correo: "fabiven@gmail.com", evento: "stream"}


Eventos(3):
even1: {nombre: "progcomp", fecha: "11-04-2024", duracion:"1", ubicacion: "UCN", tipo: "C++", diferenciador: "Educativo", evento:"1"}
even2: {nombre: "kpop", fecha: "05-04-2024", duracion:"2", ubicacion: "Plaza", tipo: "danza", diferenciador: "Social", evento:"1"}
even3: {nombre: "stream", fecha: "06-04-2024", duracion:"3", ubicacion: "Casa", tipo: "juegos", diferenciador: "Social", evento:"1"}

# Funciones del main:

eventoCorporativo(string nombre,string fecha, string duracion, string ubi, string tipo): Crea un objeto de tipo Corporativo y lo agrega al vector cantidadEventos. [void]
eventoCultural(string nombre, string fecha, string duracion, string ubi, string tipo): Crea un objeto de tipo Cultural y lo agrega al vector cantidadEventos. [void]
eventoEducativo(string nombre, string fecha, string duracion, string ubi, string tipo): Crea un objeto de tipo Educativo y lo agrega al vector cantidadEventos. [void]
eventoSocial(string nombre, string fecha, string duracion, string ubi, string tipo): Crea un objeto de tipo Social y lo agrega al vector cantidadEventos. [void]
crearEvento(): Solicita el tipo de evento que quiere crear y llama a la funcion correspondiente. [void]
buscar(string x): Comprueba en el vector si el evento x se encuentra guardado. [int]
registrarAsistentes(): Agrega un asistente a la lista de asistentes del evento ingresado. [void]
consultarAsistentes(): Entrega a todos los asistentes de un evento especifico. [void]
mostrar(): Muestra por pantalla todos los eventos creados. [void]
mostrarAsistente(): Entrega todos los asistentes de todos los eventos.[void]
mostrarEventosProgramados(): Llama a la funcion mostrar() y muestra los eventos creados. [void]
mostrarAsistentesEventos(): Llama a la funcion mostrarAsistente() y muestra los asistentes por eventos. [void]
generarInformes(): Entrega opciones para mostrar eventos programados o los asistentes de los eventos. [void]
split(string str, char separador): Permite dividir un string en un separador especifico. [vector<string>]
importarDatos(): Lee e importa la informacion de un archivo de texto. [void]
guardarDatos(): Actualiza el archivo de texto con informacion nueva. [void]
menu(): Entrega opciones para poder trabajar. [void]
