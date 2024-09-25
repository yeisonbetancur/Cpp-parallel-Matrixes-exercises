/*Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de
habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último,
ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir
nuevamente.
DevC++ Ver 5.11 Yeison Betancur Delgado 21/09/24**/

#include <iostream>
#include <cstring> 
using namespace std;

const int NUM_PAISES = 5;
const int MAX_NOMBRE = 50;
void cargarPaises(char paises[NUM_PAISES][MAX_NOMBRE], int habitantes[NUM_PAISES]) {
    for (int i = 0; i < NUM_PAISES; i++) {
        cout << "Ingrese el nombre del pais " << i + 1 << ": ";
        cin >> paises[i];
        cout << "Ingrese la cantidad de habitantes de " << paises[i] << ": ";
        cin >> habitantes[i];
    }
}

void ordenarPorNombre(char paises[NUM_PAISES][MAX_NOMBRE], int habitantes[NUM_PAISES]) {
    for (int i = 0; i < NUM_PAISES - 1; i++) {
        for (int j = i + 1; j < NUM_PAISES; j++) {
            if (strcmp(paises[i], paises[j]) > 0) {
                char temp[MAX_NOMBRE];
                strcpy(temp, paises[i]);
                strcpy(paises[i], paises[j]);
                strcpy(paises[j], temp);
                swap(habitantes[i], habitantes[j]);
            }
        }
    }
}

void ordenarPorHabitantes(char paises[NUM_PAISES][MAX_NOMBRE], int habitantes[NUM_PAISES]) {
    for (int i = 0; i < NUM_PAISES - 1; i++) {
        for (int j = i + 1; j < NUM_PAISES; j++) {
            if (habitantes[i] < habitantes[j]) { 
                char temp[MAX_NOMBRE];
                strcpy(temp, paises[i]);
                strcpy(paises[i], paises[j]);
                strcpy(paises[j], temp);
                swap(habitantes[i], habitantes[j]);
            }
        }
    }
}

void imprimirPaises(char paises[NUM_PAISES][MAX_NOMBRE], int habitantes[NUM_PAISES]) {
    for (int i = 0; i < NUM_PAISES; i++) {
        cout << paises[i] << " - " << habitantes[i] << " habitantes" << endl;
    }
}

int main() {
    char paises[NUM_PAISES][MAX_NOMBRE];
    int habitantes[NUM_PAISES];

    cout << "Este programa ordena países alfabéticamente y por cantidad de habitantes" << endl;
    cout << "Carga de paises y habitantes:" << endl;
    cargarPaises(paises, habitantes);

    cout << "\nPaises ordenados alfabeticamente:" << endl;
    ordenarPorNombre(paises, habitantes);
    imprimirPaises(paises, habitantes);

    cout << "\nPaises ordenados por cantidad de habitantes (de mayor a menor):" << endl;
    ordenarPorHabitantes(paises, habitantes);
    imprimirPaises(paises, habitantes);

    return 0;
}

