#include "librerias.h"

int main(){
	int numeroMayor=0, numeroMenor = 1000000000 , numero, sumadorNumeros = 0;  //establesco las variables a utilizar
	
	while(true){
		cout<<"ingrese un numero (ingresar -1 para terminar el programa): ";		
		cin>>numero;															//le pido al usuario que ingrese un numero.
		
		if(numero == -1) break;											// si es -1 sale del bucle 
		if(numero <= numeroMenor) numeroMenor = numero;					// compruevo si es mayor, si es ese el caso, se establece como numero mayor
		if(numero >= numeroMayor) numeroMayor = numero;					// compruevo si es menor, si es ese el caso, se establece como numero menor
		sumadorNumeros = sumadorNumeros + numero;						// suma los numeros a lo largo de la duración del programa.
	}
	
	cout<<"numero mayores es: "<<numeroMayor<<"\n";						//
	cout<<"numero menor es: "<<numeroMenor<<"\n";						// imprimo en pantalla los resultados.
	cout<<"la suma de todos los numeros es: "<<sumadorNumeros;			//
	
	
	return 0;
}
