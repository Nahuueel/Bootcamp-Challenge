#include "librerias.h"

int main(){
	setlocale(LC_ALL, "");	//llamo a la funcion setlocale() para poder utilizar caracteres especiales, como la �.
	
	string contra, verificacion;	//declaro las variables
	int intentos = 2;
	
	cout<<"Ingrese una nueva contrase�a: ";		
	cin>>contra;								//el usuario establese la contrase�a
	
	while(intentos >= 0){
		
	cout<<"Ingrese la contrasen�a: ";
	cin>>verificacion;				
	
	if (verificacion == contra){ 										//verifico la contrase�a del usuario sea la que se establecio anteriormente
	cout<<"Felicitaciones, recordas tu contrase�aa"; 					
	intentos = 0;}														//en caso sea la misma, los intentos se establecen en 0 y se sale del while,
	intentos--;															//en caso contrario se resta un intento
	}
	if(intentos < 0) cout<<"Necesitas refrescar esa memoria";			//si los intentos llegaron a un numero menor de 0 se imprime en pantalla el mensaje
	
	getch();															//espera a que el usuario presiones una tecla para terminar el programa.
	return 0;
	}
