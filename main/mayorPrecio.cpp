/*Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos 
precios en un vector paralelo de tipo float.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se 
debe contar)*/
#include<iostream>
#include<string.h>
#include <limits>

using namespace std;



void generarMatrix(char matrix[5][40], float vec[5]){
		float helper=0;
	for (int i=0;i<4;i++){
		cout<<"\nIngresa el nombre del "<<i+1<<" producto: ";
		cin.getline(matrix[i],40);
		cout<<"Ingresa el precio: ";
		cin>>helper;
		vec[i]=helper;
		cin.ignore(numeric_limits<int>::max(),'\n');
	}
}

int contar(float vec[5]){
	int i, j=1;
	for(i=0;i<5;i++){
		if(vec[i]>vec[0]){
			j++;
		}
	}
	return j;
}

int main(){
	float prices[5];
	char names[5][40];
	generarMatrix(names, prices);
	cout<<"Hay "<<contar(prices)<<" con un precio mayor al del primer producto ingresado ";
	
}
