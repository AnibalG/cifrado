#include <stdio.h>
#include <stdlib.h>

#define TAMANO 1024

int main(int argc, char **argv){
	if(argc == 3){
		printf("Cifrado Ciclico: \n");
       		char cod[TAMANO] ={0};

		int llave = atoi(argv[1]);
		cifrado(cod, argv[2], llave);
        	printf("Mensaje cifrado: %s\n", cod);
		return (0);

	}
	char mensaje[TAMANO] = {0};
	char cod[TAMANO] = {0};
	char *morsearray[TAMANO] = {0};
	printf("Cifrado ciclico \n");
	printf("Ingrese un mensaje a cifrar:  ");
	fgets(mensaje, 100, stdin);
	printf("Ingrese la llave numerica: ");
	int llave;
	scanf("%d", &llave);

	cifrado(cod, mensaje, llave);
	morse(morsearray, mensaje);
	printf("Mensaje cifrado: %s", cod);
	printf("Codigo Morse: ");
	for(int i = 0; morsearray[i] != '\0'; i++)
	{
   		printf("%s", morsearray[i]);
	}
	printf("\n");

	return(0);

}
