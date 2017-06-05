#include <stdio.h>
#include <stdlib.h>
#include "codificacion.h"

char **claveMorse(char *mensaje){
	char **cod = malloc(sizeof(mensaje));
	
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
	return cod;


}
