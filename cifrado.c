#include <stdio.h>

#define TAMANO 1024

void cifrado( char cod[], char mensaje[], int llave);

int main(){

	char mensaje[TAMANO] = {0};
	char cod[TAMANO] = {0};

	printf("Ingrese un mensaje:  ");
	fgets(mensaje, 100, stdin);
	printf("Ingrese la llave: ");
	int llave;
	scanf("%d", &llave);

	cifrado(cod, mensaje, llave);
	printf("%s", cod);
	return(0);

}

void cifrado(char cod[TAMANO], char mensaje[TAMANO], int llave){

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
}
