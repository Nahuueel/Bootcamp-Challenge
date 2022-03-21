#include "librerias.h"

int main(){
	setlocale(LC_ALL, "");	//llamo a la funcion setlocale() para poder utilizar caracteres especiales, como la ñ.
	
	string contra, verificacion;	//declaro las variables
	int intentos = 2;
	
	cout<<"Ingrese una nueva contraseña: ";		
	cin>>contra;								//el usuario establese la contraseña
	
	while(intentos >= 0){
		
	cout<<"Ingrese la contrasenña: ";
	cin>>verificacion;				
	
	if (verificacion == contra){ 										//verifico la contraseña del usuario sea la que se establecio anteriormente
	cout<<"Felicitaciones, recordas tu contraseñaa"; 					
	intentos = 0;}														//en caso sea la misma, los intentos se establecen en 0 y se sale del while,
	intentos--;															//en caso contrario se resta un intento
	}
	if(intentos < 0) cout<<"Necesitas refrescar esa memoria";			//si los intentos llegaron a un numero menor de 0 se imprime en pantalla el mensaje
	
	getch();															//espera a que el usuario presiones una tecla para terminar el programa.
	return 0;
	}
