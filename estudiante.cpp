#include <iostream>
#include "estudiante.h"

using namespace std;

void MostrarDatos(Cestudiante *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << arreglo[i].getnombre() << endl;
        cout << "Apellido: " << arreglo[i].getapellido() << endl;
        cout << "Rindio el: " << arreglo[i].getdia() << " de "<<arreglo[i].getmes()<<" del "<< arreglo[i].getanio()<<endl;
        cout << "Calificacion: " << arreglo[i].getcalificacion() << endl;
        
        cout<<endl;
    }
}


void AlumnosAprobados2023(Cestudiante *arreglo, int n) {
    cout << "Estudiantes Aprobados en 2023: " << endl;
    for (int i = 0; i < n; i++) {
        if (arreglo[i].getanio() == 2023 && arreglo[i].getcalificacion() >= 7) {
            cout << "- " << arreglo[i].getnombre() << " "<<arreglo[i].getapellido()<<endl;
        }
    }
    cout<<endl;
}



int main() {
    Cestudiante *estudiantes = new Cestudiante[6];

    estudiantes[0] = Cestudiante("Pablo", "Rucci", 6, "Diciembre", 2022, 8);
    estudiantes[1] = Cestudiante("Ana", "Gomez", 15, "Julio", 2023, 9);
    estudiantes[2] = Cestudiante("Carlos", "Lopez", 8, "Marzo", 2023, 7);
    estudiantes[3] = Cestudiante("Luisa", "Rodriguez", 2, "Octubre", 2023, 10);
    estudiantes[4] = Cestudiante("Marta", "Fernandez", 11, "Febrero", 2023, 6);
    estudiantes[5] = Cestudiante("Juan", "Santos", 4, "Agosto", 2022, 5);

    MostrarDatos(estudiantes, 6);
    AlumnosAprobados2023(estudiantes,6);
    

    delete[] estudiantes;

    return 0;
}



