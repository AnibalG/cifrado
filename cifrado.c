#include <stdio.h>
#include <stdlib.h>
#define TAMANO 1024

void cifrado( char cod[], char mensaje[], int llave);
void morse(char *cod[], char mensaje[]);
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


void morse(char *cod[TAMANO], char mensaje[TAMANO]){
	for(int i = 0; mensaje[i] != '\0'; i++){
		char car = mensaje[i];
		switch(car){
			case 'A':
			case 'a':
				cod[i] = " .- ";
     				break;
			case 'B':
                        case 'b':
                                cod[i] = " -...";
                                break;
			case 'C':
                        case 'c':
                                cod[i] = " -.-.";
                                break;
			case 'D':
                        case 'd':
                                cod[i] = " -..";
                                break;
			case 'E':
                        case 'e':
                                cod[i] = " .";
                                break;
			case 'F':
                        case 'f':
                                cod[i] = " ..-.";
                                break;
			case 'G':
                        case 'g':
                                cod[i] = " --.";
                                break;
			case 'H':
                        case 'h':
                                cod[i] = " ....";
                                break;
			case 'I':
                        case 'i':
                                cod[i] = " ..";
                                break;
                        case 'J':
                        case 'j':
                                cod[i] = " .---";
                                break;
                        case 'K':
                        case 'k':
                                cod[i] = " -.-";
                                break;
                        case 'L':
                        case 'l':
                                cod[i] = " .-..";
                                break;
                        case 'M':
                        case 'm':
                                cod[i] = " --";
                                break;
                        case 'N':
                        case 'n':
                                cod[i] = " -.";
                                break;
                        case 'O':
                        case 'o':
                                cod[i] = " ---";
                                break;
                        case 'P':
                        case 'p':
                                cod[i] = " .--.";
                                break;
			case 'Q':
                        case 'q':
                                cod[i] = " --.-";
                                break;
                        case 'R':
                        case 'r':
                                cod[i] = " .-.";
                                break;
                        case 'S':
                        case 's':
                                cod[i] = " ...";
                                break;
                        case 'T':
                        case 't':
                                cod[i] = " -";
                                break;
                        case 'U':
                        case 'u':
                                cod[i] = " ..-";
                                break;
                        case 'V':
                        case 'v':
                                cod[i] = " ...-";
                                break;
                        case 'W':
                        case 'w':
                                cod[i] = " .--";
                                break;
			case 'X':
                        case 'x':
                                cod[i] = " -..-";
                                break;
                        case 'Y':
                        case 'y':
                                cod[i] = " -.--";
                                break;
                        case 'Z':
                        case 'z':
                                cod[i] = " --..";
                                break;
			case ' ':
                                cod[i] = " /";
                                break;


		}
	}


}
