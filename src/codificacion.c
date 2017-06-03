#include <stdio.h>
#include "codificacion.h"

char *claveMorse(char* mensaje){
	for(int i = 0; mensaje[i] != '\0'; i++){
		char car = mensaje[i];
		switch(car){
			case 'A':
			case 'a':
				mensaje[i] = " .- ";
     				break;
			case 'B':
                        case 'b':
                                mensaje[i] = " -...";
                                break;
			case 'C':
                        case 'c':
                                mensaje[i] = " -.-.";
                                break;
			case 'D':
                        case 'd':
                                mensaje[i] = " -..";
                                break;
			case 'E':
                        case 'e':
                                mensaje[i] = " .";
                                break;
			case 'F':
                        case 'f':
                                mensaje[i] = " ..-.";
                                break;
			case 'G':
                        case 'g':
                                mensaje[i] = " --.";
                                break;
			case 'H':
                        case 'h':
                                mensaje[i] = " ....";
                                break;
			case 'I':
                        case 'i':
                                mensaje[i] = " ..";
                                break;
                        case 'J':
                        case 'j':
                                mensaje[i] = " .---";
                                break;
                        case 'K':
                        case 'k':
                                mensaje[i] = " -.-";
                                break;
                        case 'L':
                        case 'l':
                                mensaje[i] = " .-..";
                                break;
                        case 'M':
                        case 'm':
                                mensaje[i] = " --";
                                break;
                        case 'N':
                        case 'n':
                                mensaje[i] = " -.";
                                break;
                        case 'O':
                        case 'o':
                                mensaje[i] = " ---";
                                break;
                        case 'P':
                        case 'p':
                                mensaje[i] = " .--.";
                                break;
			case 'Q':
                        case 'q':
                                mensaje[i] = " --.-";
                                break;
                        case 'R':
                        case 'r':
                                mensaje[i] = " .-.";
                                break;
                        case 'S':
                        case 's':
                                mensaje[i] = " ...";
                                break;
                        case 'T':
                        case 't':
                                mensaje[i] = " -";
                                break;
                        case 'U':
                        case 'u':
                                mensaje[i] = " ..-";
                                break;
                        case 'V':
                        case 'v':
                                mensaje[i] = " ...-";
                                break;
                        case 'W':
                        case 'w':
                                mensaje[i] = " .--";
                                break;
			case 'X':
                        case 'x':
                                mensaje[i] = " -..-";
                                break;
                        case 'Y':
                        case 'y':
                                mensaje[i] = " -.--";
                                break;
                        case 'Z':
                        case 'z':
                                mensaje[i] = " --..";
                                break;
			case ' ':
                                mensaje[i] = " /";
                                break;


		}
	}
	return mensaje;


}
