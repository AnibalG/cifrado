#include <stdio.h>
#include <string.h>
#include "cifrado.h"

char* cifrado(char* mensaje, int llave){

	char *cod = malloc(sizeof(mensaje));

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
		cod[i] = caracter;

	}
	return cod;
}

char* cifradoAutollave(char* mensaje, char* llave){

	char *cifrado = malloc(sizeof(mensaje));
	strcpy(cifrado, mensaje);

	strcat(llave, cifrado);

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
		cifrado[i] = caracter;
        }
	return cifrado;
}

char* cifradoContrasena(char* mensaje, char* llave){
	char *cod = malloc(sizeof(mensaje));

	strcat(llave, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	for(int i = 0; mensaje[i] != '\0'; i++){
		char caracter = mensaje[i];
		if(caracter >= 'A' && caracter <= 'Z'){
			cod[i] = llave[caracter - 'A'];
		}
		else{
			cod[i] = caracter;
		}
	}


	return cod;

}

