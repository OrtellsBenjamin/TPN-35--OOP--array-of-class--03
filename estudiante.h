#ifndef estudiante_h
#define estudiante_h
#include <string>
using namespace std;

class Cestudiante {

public:
    Cestudiante(string nom, string ap, int d, string m, int a, int cal);
    Cestudiante();

    string getnombre();
    string getapellido();
    int getdia();
    string getmes();
    int getanio();
    int getcalificacion();

private:
    string nombre;
    string apellido;
    int dia;
    string mes;
    int anio;
    int calificacion;
};

Cestudiante::Cestudiante() {
}

Cestudiante::Cestudiante(string nom, string ap, int d, string m, int a, int cal) {
    nombre = nom;
    apellido = ap;
    dia = d;
    mes = m;
    anio = a;
    calificacion = cal;
}

string Cestudiante::getnombre() {
    return nombre;
}

string Cestudiante::getapellido() {
    return apellido;
}

int Cestudiante::getdia() {
    return dia;
}

string Cestudiante::getmes() {
    return mes;
}

int Cestudiante::getanio() {
    return anio;
}

int Cestudiante::getcalificacion() {
    return calificacion;
}

#endif 

