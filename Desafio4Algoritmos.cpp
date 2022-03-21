#include "librerias.h"

int main(){
	
	srand (time(NULL));						//Inicializo una semilla para generar un numero aleatorio
	int numeroSecreto;						//Declaro la variable que contendra el numero aleatorio
	numeroSecreto = rand() % 1000;			//Establesco el numero aleatorio que tendra que adivinar el usuario
	
	int adivinanza;
	
	cout<<"Numero aleatorio escogido por la computadora\n";				
	while(true){
	cout<<"Adivina el numero: ";
	cin>>adivinanza;												//Le pido al usuario que adivine el numero
			
	if(adivinanza == numeroSecreto) {								//chequeo si el numero introducido es el mismo que el aleatorio
	cout<<"Has adivinado el numero, buen trabajo"; 
	return 0;}
	
	adivinanza < numeroSecreto ? cout<<"Es Mayor\n" : cout<<"Es menor\n"; 			//empleo un operador ternario para imprimir en pantalla segun el resultado.
	}
	
	return 0;
}
