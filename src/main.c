#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cifrado.h"
#include "codificacion.h"

#define TAMANO 1024

int main(int argc, char **argv){

	if(argc == 4){

		char tipo = argv[3][1];
		char **morsearray;
		if(tipo == 'c'){

			printf("Cifrado ciclico: \n");
		
			
			int llave = atoi(argv[1]);
			char* cod = (char*) cifrado(argv[2], llave);
			morsearray = claveMorse(argv[2]);
			printf("Mensaje cifrado: %s \n", cod);
			printf("Codigo Morse: ");
			for(int i = 0; morsearray[i] != '\0'; i++)
			{
		   		printf("%s", morsearray[i]);
			}
			printf("\n");
			
		}
		else if(tipo == 'a'){

			printf("Cifrado auto llave: \n");
			
			
			char* cod = (char*) cifradoAutollave(argv[2], argv[1]);
			morsearray = claveMorse(argv[2]);
			printf("Mensaje cifrado: %s \n", cod);
			printf("Codigo Morse: ");
			for(int i = 0; morsearray[i] != '\0'; i++)
			{
		   		printf("%s", morsearray[i]);
			}
			printf("\n");
			
		}
		else if(tipo == 'p'){

			printf("Cifrado contrasena: \n");
			
			

			char mensaje[TAMANO];
			strcpy(mensaje, argv[2]);
			char* codigo = (char*) cifradoContrasena(mensaje, argv[1]);
			morsearray = claveMorse(mensaje);
			printf("Mensaje cifrado: %s \n", codigo);
			printf("Codigo Morse: ");
			for(int i = 0; morsearray[i] != '\0'; i++)
			{
		   		printf("%s", morsearray[i]);
			}
			printf("\n");
			
		}

	return (0);


	}
	char mensaje[TAMANO] = {0};
	char tipo;
	printf("Tipo de cifrado:  ");
	tipo = getchar();
	getchar();
	
	//fgets(tipo, 100, stdin);

	char **morsearray;
	
	if(tipo == 'C'){
		
		printf("Cifrado ciclico: ");
		printf("Ingrese un mensaje a cifrar:  \n");
		fgets(mensaje, 100, stdin);
		printf("Ingrese la llave numerica: ");
		int llave;
		scanf("%d", &llave);
		char* cod = (char*) cifrado(mensaje, llave);
		morsearray = claveMorse(mensaje);
		printf("Mensaje cifrado: %s", cod);
		printf("Codigo Morse: ");
		for(int i = 0; morsearray[i] != '\0'; i++)
		{
	   		printf("%s", morsearray[i]);
		}
		printf("\n");
		
	}
	else if(tipo == 'A'){
		
		printf("Cifrado auto llave: \n");
		
		printf("Ingrese un mensaje a cifrar:  ");
		fgets(mensaje, 100, stdin);
		printf("Ingrese la llave: ");
		char llave[TAMANO] = {0};
		fgets(llave, 100, stdin);
		strtok(llave, "\n");
		char* cod = (char*) cifradoAutollave(mensaje, llave);
		morsearray = claveMorse(mensaje);
		printf("Mensaje cifrado: %s ", cod);
		printf("Codigo Morse: ");
		for(int i = 0; morsearray[i] != '\0'; i++)
		{
	   		printf("%s", morsearray[i]);
		}
		printf("\n");
		
	}
	else if(tipo == 'P'){
		
		printf("Cifrado contrasena: \n");
		
		printf("Ingrese un mensaje a cifrar:  ");
		fgets(mensaje, 100, stdin);
		printf("Ingrese la llave: ");
		char llave[TAMANO] = {0};
		fgets(llave, 100, stdin);
		strtok(llave, "\n");
		char* cod = (char*) cifradoContrasena(mensaje, llave);
		morsearray = claveMorse(mensaje);
		printf("Mensaje cifrado: %s ", cod);
		printf("Codigo Morse: ");
		for(int i = 0; morsearray[i] != '\0'; i++)
		{
	   		printf("%s", morsearray[i]);
		}
		printf("\n");
		
	}	
	

	return(0);

}
