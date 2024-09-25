/*Definir una matriz de 4 filas y 5 columnas. Realizar su carga e impresión.
Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la
matriz.
DevC++ Ver 5.11 Yeison Betancur Delgado 21/09/24*/
#include<iostream>
using namespace std;
void generarMatrix(int m[4][5]){
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
void intercambioFilaMatrix(int matrix[4][5],int f1,int f2){
	int helper;
	for(int i=0;i<5;i++){
		helper=matrix[f1][i];
		matrix[f1][i]=matrix[f2][i];
		matrix[f2][i]=helper;
	}
}

void imprimirMatrix(int m[4][5]){
		for (int i=0;i<4;i++){
		cout<<"\n<<"<<"fila "<<i+1<<": ";
		for(int j=0;j<5;j++){
			cout<<m[i][j]<<" ";
		}
	}
}

int main(){
	int matrix[4][5];
	cout<<"Este programa recibe una matrix, y cambia los datos de la primer fila con los datos de la segunda fila";
	generarMatrix(matrix);
	cout<<"\nMatriz antes del cambio: ";
	imprimirMatrix(matrix);
	cout<<"\nMatriz despues del cambio: ";
	intercambioFilaMatrix(matrix,0,1);
	imprimirMatrix(matrix);
}
