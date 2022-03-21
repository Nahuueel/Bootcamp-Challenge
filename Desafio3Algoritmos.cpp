#include "librerias.h"
int main(){
	setlocale(LC_ALL, "");	//llamo a la funcion setlocale() para poder utilizar caracteres especiales, como la ñ.
	
	float valorHora, antiguedad, horasTrabajadas, cobreTotal;
	string nombre;
	
	cout<<"Ingrese el nombre del empleado: ";													//
	cin>>nombre;																				//
																								//
	cout<<"Indique antiguedad del empleado (años): ";											//		
	cin>>antiguedad;																			//
																								//		Pido los datos al usuario.
	cout<<"Declare las horas trabajadas este mes por "<<nombre<<" : ";							//
	cin>>horasTrabajadas;																		//
																								//
	cout<<"Declare el valor monetario por cada hora laboral: ";									//
	cin>>valorHora;																				//
	
	antiguedad>10 ?	cobreTotal = (antiguedad*30)+(horasTrabajadas*valorHora) : cobreTotal=horasTrabajadas*valorHora; 			//empleando un operador ternario, establesco la operacion matematia a realizar en dependencia del resultado
	
	cout<<"El empleado "<<nombre<<" con una antiguedad de "<<antiguedad<<" años, tendría que cobrar un total de $"<<cobreTotal;		//imprimo en pantalla los datos


	return 0;
}
