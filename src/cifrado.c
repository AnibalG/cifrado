#include <stdio.h>
#include <string.h>
#include "cifrado.h"

char* cifrado(char* mensaje, int llave){

	for(int i = 0; mensaje[i] != '\0'; i++){
		char caracter = mensaje[i];
		if(caracter >= 'a' && caracter <= 'z' ){
			caracter = caracter + llave;

			if (caracter > 'z'){
				caracter = caracter - 'z' + 'a' -1;
			}
			else if (caracter < 'a'){
				caracter = caracter + 'z' - 'a' +1;
			}
		}
		else if(caracter >= 'A' && caracter <= 'Z'){
			caracter = caracter + llave;

                        if (caracter > 'Z'){
                                caracter = caracter - 'Z' + 'A' -1;
			}
		else if (caracter < 'A'){
                                caracter = caracter + 'Z' - 'A' +1;
			}
		}
		mensaje[i] = caracter;

	}
	return mensaje;
}

char* cifradoAutollave(char* mensaje, char* llave){

	strcat(llave, mensaje);

	for(int i = 0; mensaje[i] != '\0'; i++){
                char c1 = mensaje[i];
		char c2 = llave[i];
                char caracter = c1 - 'A' + c2;

		if (caracter > 'Z'){
                	caracter = caracter - 'Z' + 'A' -1;
               	}
                else if (caracter < 'A'){
                	caracter = caracter + 'Z' - 'A' +1;
                }
		mensaje[i] = caracter;
        }
	return mensaje;
}

char* cifradoContraseña(char* mensaje, char* llave){
	strcat(llave, "ABCDEFGHIJKLMNOPQRSTUVWXY");
	for(int i = 0; mensaje[i] != '\0'; i++){
		char caracter = mensaje[i];
		if(caracter >= 'A' && caracter <= 'Z'){
			mensaje[i] = llave[caracter- 'A']
		}
	}

	return mensaje;

}

