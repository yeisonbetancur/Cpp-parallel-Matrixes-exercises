/*En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben
procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Notas de cada alumno tres (3)(almacenar los datos en
estructuras paralelas)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la
condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota
está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.
DevC++ Ver 5.11 Yeison Betancur Delgado 21/09/24**/

#include <iostream>
#include <cstring> 
using namespace std;

void cargarAlumnos(char nombres[3][50], float notas[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin >> nombres[i];  
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
}

void imprimirAlumnos(char nombres[3][50], float notas[3][3]) {
    int mb = 0;

    for (int i = 0; i < 3; i++) {
        cout << "\nAlumno: " << nombres[i] << endl;
        cout << "Notas: ";
        for (int j = 0; j < 3; j++) {
            cout << notas[i][j] << " ";
        }
        cout << endl;

        float promedio = 0;
        for (int j = 0; j < 3; j++) {
            promedio += notas[i][j];
        }
        promedio /= 3;

        string condicion;
        if (promedio >= 8) {
            condicion = "Muy Bueno";
            mb++;
        } else if (promedio >= 4) {
            condicion = "Bueno";
        } else {
            condicion = "Insuficiente";
        }
        cout << "Condición: " << condicion << endl;
    }

    cout << "\nCantidad de alumnos con 'Muy Bueno': " << mb << endl;
}

int main() {
    char nombres[3][50]; 
    float notas[3][3];

    cout << "Este programa carga los nombres y notas de los alumnos e imprime la cantidad de 'Muy Bueno'" << endl;
    cout << "Carga de nombres y notas de los alumnos:" << endl;
    cargarAlumnos(nombres, notas);

    cout << "\nListado de alumnos, notas y condiciones:" << endl;
    imprimirAlumnos(nombres, notas);

    return 0;
}

