/*? Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor.
DevC++ Ver 5.11 Yeison Betancur Delgado 21/09/24*/
#include<iostream>
using namespace std;

void generarMatrix(int matrix[3][4]){
	int i, j, help=0;
	for(i=0;i<4;i++){
		cout<<"\nIngresa los datos de la columna "<<i+1<<" :";
		for(j=0;j<3;j++){
			cout<<"\nIngresa el dato de la fila "<<j+1<<" ";
			cin>>help;
			matrix[j][i]=help;
		}
	}
}

int valorMayor(int matrix[3][4]){
	int i, j, higher;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(matrix[i][j]>higher)
			higher=matrix[i][j];
		}
	}
	return higher;
}
	

int main(){
	int matrix[3][4];
	cout<<"Este Programa recibe una matriz 3x4, donde se reciben los datos (numeros enteros) columna por culomna";
	generarMatrix(matrix);
	cout<<"\nEl valor mayor de la matriz es: "<<valorMayor(matrix);
}
