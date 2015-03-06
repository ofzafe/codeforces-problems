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

int main(){
	string cadena;
	cin >> cadena;
	int nivel = calcular_numero_niveles(cadena);
	calcular_miembros_del_nivel(nivel, calcular_primer_elemento(nivel));
	
	for(int i=0;i<pow(2,nivel);i++)
		cout << miembros_nivel[i] << " ";
}

