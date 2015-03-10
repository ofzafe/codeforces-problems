//Problema de un arbol en CodeChef

#include <iostream>
#include <math.h>
#include <string>
#define N 8

using namespace std; 

int miembros_nivel[N];

int calcular_primer_elemento(int nivel){
	int primer_elemento = 0;

	for(int i=0;i < nivel;i++){
		primer_elemento = primer_elemento + pow(2,i);
	}

	return primer_elemento;
}

void calcular_miembros_del_nivel(int nivel, int primer_elemento){
	miembros_nivel[0] = primer_elemento;	

	for(int i=0;i<=pow(2,nivel);i++){
		miembros_nivel[i+1] = miembros_nivel[i] + 1;
	}
}

int calcular_numero_niveles(string cadena){
	return cadena.size();
}

void buscar_elemento(int nivel, string cadena){
	
	int pointer = 0, exponente = nivel-1;

	for (int i = 0; i < nivel; ++i)
	{
		if(cadena[i] == 'r') pointer = pointer + pow(2,exponente);
		exponente--;
	}
	
	cout << miembros_nivel[pointer] << " ";
}

int main(){
	string cadena;
	cin >> cadena;
	int nivel = calcular_numero_niveles(cadena);
	calcular_miembros_del_nivel(nivel, calcular_primer_elemento(nivel));
	buscar_elemento(nivel, cadena);
	//for(int i=0;i<pow(2,nivel);i++)
	//	cout << miembros_nivel[i] << " ";
}
