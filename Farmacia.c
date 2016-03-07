#include <stdlib.h>
#include <stdio.h>
#define MAX

int arreglo[MAX];   /*Se declaran las variables globales, estas seran cambiadas mas adelante por una estructura para poder manejar memoria dinamica*/
int indice;

/*Aqui seran declaradas los prototipos de nuestras funciones*/
int menu(char texto[], int n);


/*Este sera el main*/
int main()
{
	int opcion;
	indice = -1;

	do{
		opcion = menu("1) Agregar\n2) Borrar\n3) Consultar\n 4)Salir\n",4);
		switch(opcion)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
		}
	}while(opcion!=7)
}

/*Apartir de aqui ya declararemos nuestros metodos*/
int Menu(char texto[], int n)
{
	int opción,dato;
	do
	{		
		printf("%s",texto);
		scanf("%d",&opcion);
		if (opcion<1 || opcion>n)
		{
			printf("Error:la opcion seleccionada no es valida");
		}
	}while(opcion<1 || opcion>n);
	return opcion;
}
