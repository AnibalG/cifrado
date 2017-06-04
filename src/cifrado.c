#include <stdio.h>
#include <string.h>
#include "cifrado.h"
#define TAMANO 10000
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

	char* cifrado = (char *) malloc(sizeof(char) * TAMANO);

	

	char mensajeA[TAMANO] = {0};
	char llaveA[TAMANO] = {0};

	strcat( mensajeA, mensaje);
	strcat( llaveA, llave);
	strcat( llaveA, mensajeA);


	int j = 0;
	int d = 0;
	for(int i = 0; i<strlen(llaveA); i++)
	{
		d = llaveA[j];
		while( d<65 || (d>90 && d<97) ||  d>122 )
                {
                        j++;
			d = llaveA[j];
                }
                llaveA[i] = llaveA[j];
                j++;
	}					

	int c = 0;
	char letra = 'a';
	int mayus = 1;
	int noLetra = 0;
	int spacSimbNum = 0;

	for(int i = 0; i<= strlen(mensajeA); i++)
	{
		noLetra = 0;
		mayus = 1;
		c = mensajeA[i];

		if( c<=122 && c>=97 )
		{
			c -= 32;
			mayus = 0;
		}

		if( c<=90 && c>=65 )
		{
			c += ( llaveA[i-spacSimbNum] - 65);

			if( c>90 )
				c = (c-90) + 64;
			if(mayus == 0)
				c += 32;
		}
		else
		{
			noLetra = 1;
			spacSimbNum++;
		}

		if( noLetra == 1 )
			cifrado[i] = mensajeA[i];
		else
		{
			letra = c;
			cifrado[i] = letra;
		}
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

