#include <stdio.h>
#include <stdlib.h>

#define TAMANO 1024

int main(int argc, char **argv){
	if(argc == 4)
		if(argv[3]==""){
		printf("Cifrado Ciclico: \n");
       		char cod[TAMANO] ={0};

		int llave = atoi(argv[1]);
		cifrado(cod, argv[2], llave);
        	printf("Mensaje cifrado: %s\n", cod);
	if(argv[3]=="A"){
		printf("Cifrado Autollave \n");
		char* pass[1000]={0};
		 printf("Ingrese Contrasenia:  ");
        	fgets(pass, 100, stdin);
        	char* final2=cifradoAutollave(argc[2],pass);
        	printf("Codigo Autollave: %s",final2);
}	
	if(argv[3]=="P"){
		printf("Cifrado Contrasena \n");
		char* pass[1000]={0};
        	printf("Ingrese Contrasenia:  ");
        	fgets(pass, 100, stdin);
        	char* final2=cifradoContrasena(argv[2],pass);
        	printf("Codigo Autollave: %s",final2);
	
}
	return (0);

	}
	char opcion[1000]={0};
	char mensaje[TAMANO] = {0};
	char cod[TAMANO] = {0};
	char *morsearray[TAMANO] = {0};

	 printf("Ingrese modo de cifrado:  ");
        fgets(opcion, 100, stdin);
	if(opcion=="C"){
	printf("Cifrado ciclico \n");
	printf("Ingrese un mensaje a cifrar:  ");
	fgets(mensaje, 100, stdin);
	printf("Ingrese la llave numerica: ");
	int llave;
	scanf("%d", &llave);

	char* final= cifrado(cod, mensaje, llave);
	printf("Codigo Ciclico: %s",final);
	//morse(morsearray, mensaje);
	//printf("Mensaje cifrado: %s", cod);
	//printf("Codigo Morse: ");
	//for(int i = 0; morsearray[i] != '\0'; i++)
	//{
   		//printf("%s", morsearray[i]);
	//}
	//printf("\n");
}
	if(opcion=="A"){
		
        printf("Cifrado Autollave \n");
        printf("Ingrese un mensaje a cifrar:  ");
        fgets(mensaje, 100, stdin);
	char* pass[1000]={0};
	printf("Ingrese Contrasenia:  ");
        fgets(pass, 100, stdin);
	char* final2=cifradoAutollave(mensaje,pass);
	printf("Codigo Autollave: %s",final2);
}
 if(opcion=="P"){

        printf("Cifrado Contrasena \n");
        printf("Ingrese un mensaje a cifrar:  ");
        fgets(mensaje, 100, stdin);
        char* pass[1000]={0};
        printf("Ingrese Contrasenia:  ");
        fgets(pass, 100, stdin);
        char* final2=cifradoContrasena(mensaje,pass);
        printf("Codigo Autollave: %s",final2);
}
	return(0);

}
