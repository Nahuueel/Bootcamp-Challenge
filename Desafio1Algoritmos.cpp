#include "librerias.h"

bool esPrimo(int numero); //establesco una funcion en el header que retorna verdadero o falso.

int main() {
		
	int numero;							//establesco variables
	string respuesta;				
	
	cout<<"Escribe un numero y te dire si es primo:\n";
	cin>>numero;												//pido al usuario que escriba un numero
  
	esPrimo(numero) ? cout<<"Es primo" : cout<<"NO es primo";	//empleo un operador ternario que imprime si el numero es primo o no, basado en el resultado devuelto por una funcion
						
}

bool esPrimo(int numero) {												//establesco la funcion que indicara si el numero que se le da es primo o no.
  
	if (numero == 0 || numero == 1 || numero == 4) return false;
	for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
	}
  
	return true;
}

