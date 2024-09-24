/*Definir una matriz de 4 filas y 5 columnas. Realizar su carga e impresión.
Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la
matriz.
DevC++ Ver 5.11 Yeison Betancur Delgado 21/09/24*/
#include<iostream>
using namespace std;
void generarMatriz(int m[4][5]){
	int helper=0;
	for (int i=0;i<4;i++){
		cout<<"\nIngresa los datos de la "<<i+1<<" fila de la matriz";
		for(int j=0;j<5;j++){
			cout<<"\nColumna "<<j+1<<":";
			cin>>helper;
			m[i][j]=helper;
		}
	}
}
void copiarMatrixVector(int m[4][5],int v2[5]), int j{
	int i;
	for(i=0;i<5;i++){
		v2[i]=m[i][j];
	}
}
int main(){
	int matrix[4][5];
	cout<<"Este programa recibe una matrix, y cambia los datos de la primer fila con los datos de la segunda fila";
	
}
