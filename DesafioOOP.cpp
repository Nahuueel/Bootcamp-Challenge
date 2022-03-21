#include "librerias.h"
#include <array>

class Password{
	private:
		int longitud;
		string contrasena;
		
	public:
		Password(){
		longitud = 8;
		}
		
		Password(int longitudIngresada){
			longitud = longitudIngresada;
		}
		
		int getLongitud(){ return longitud;}
		string getContrasena(){ return contrasena;}
		
		void setLongitud(int _longitud){longitud = _longitud;}


		void generaPassword (){
			srand (time(NULL));
			
	        for (int i=0;i<longitud;i++){
	
	            int eleccion = rand() % 3 + 1;
	  
	            if (eleccion==1){
	            	contrasena += rand()%(123-97)+97;
	            }else{
	                if(eleccion==2){
	            	contrasena += rand()%(91-65)+65;
	                }else{
	            	contrasena += rand()%(58-48)+48;
	                }
	            }
	        }
    	}


		bool esFuerte(){
	        int cuentanumeros=0;
	        int cuentaminusculas=0;
	        int cuentamayusculas=0;
	
	        for (int i=0;i<contrasena.size();i++){
	                if (contrasena[i]>=97 && contrasena[i]<=122){
	                    cuentaminusculas+=1;
	                }else{
	                    if (contrasena[i]>=65 && contrasena[i]<=90){
	                        cuentamayusculas+=1;
	                }else{
	                    cuentanumeros+=1;
	                    }
	                }
	            }
	            
	            if (cuentanumeros>=5 && cuentaminusculas>=1 && cuentamayusculas>=2){
	            return true;
	        }else{
	            return false;
	        }
    	}
};

int main(){
	setlocale(LC_ALL, "");
	
	Password contra;
	contra.generaPassword();
	cout<<"Contraseña al azar: "<<contra.getContrasena();
	contra.esFuerte() ? cout<<" Esta contraseña es fuerte" : cout<<" Esta conraseña no es fuerte.";
	
	int longitud;
	cout<<"\n\nIngresa la longitud para una nueva contraseña: ";
	cin>>longitud;
	Password contra1(longitud);
	
	contra1.generaPassword();
	cout<<"\nNueva contraseña generada con nueva longitud: "<<contra1.getContrasena();
	contra1.esFuerte() ? cout<<" Esta contraseña es fuerte" : cout<<" Esta conraseña no es fuerte.";
	

	return 0;
}

