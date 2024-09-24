#include<iostream>
using namespace std;

void generarMatrix(int matrix[4][5]){
	int i, j, help=0;
	for(i=0;i<5;i++){
		cout<<"\nIngresa los datos de la columna "<<i+1<<" :";
		for(j=0;j<4;j++){
			cout<<"\nIngresa el dato de la fila "<<j+1<<" ";
			cin>>help;
			matrix[j][i]=help;
		}
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


void ImprimirVector(int m[5]){
	for(int i=0;i<5;i++){
	cout<<m[i];}
}	

int main(){
	int matrix[4][5];
	cout<<"Este Programa recibe una matriz 4x5, donde se reciben los datos (numeros enteros) columna por culomna";
	generarMatrix(matrix);
	cout<<"\nLa matriz ingresada fue: ";
	ImprimirVector(matrix[1]);
}
