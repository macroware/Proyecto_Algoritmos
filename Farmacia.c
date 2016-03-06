#include <stdlib.h>
#include <stdio.h>

int Menu(){
	int opción,dato;
	do{		
		printf("%s",texto);
		scanf("%d",&opcion);
		if (opcion<1 || opcion>n){
			printf("Error:la opcion seleccionada no es valida");
		}
	}while(opcion<1 || opcion>n);
	return opcion;
}