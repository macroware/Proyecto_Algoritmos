#include <stdlib.h>
#include <stdio.h>
#define MAX 30
/*Se declaran las variables globales, estas seran cambiadas mas adelante por una estructura para poder manejar memoria dinamica*/
int indice;

typedef struct
{
 			/*Faltan definir los parametros a utilizar*/
}Medicamento;

/*Aqui seran declaradas los prototipos de nuestras funciones*/
int menu(char texto[], int n);
void captura_medicamento(Medicamento a);
int Borrar(int pos);

/*Este sera el main*/
int main()
{
	int opcion,t,pos;
	indice = -1;
	Medicamento *med;
	char cap[MAX];

	printf("Cuantos medicamentos quieres registrar: ");
	scanf("%d",&t)

	med=(Medicamento *)malloc(t*sizeof(Medicamento));

	do{
		opcion = menu("1) Agregar\n2) Borrar\n3) Consultar\n 4)Actualizar\n 5)Salir\n",5);
		switch(opcion)
		{
			case 1:
				if (indice<t-1)
				{
					captura_medicamento(med[indice+1]);
				}
				else
					printf("Error, no hay espacio");
				break;
			case 2:

				printf("Ingrese el nombre del medicamento a borrar: ");
				fflush(stdin);
				gets(&cap)
				pos=Buscar(dato);
				if(pos!=-1)
				{
					Borrar(pos);
				}
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}while(opcion!=4)
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
};

void captura_medicamento(Medicamento a)
{

};

int Borrar(int pos)
{
	med[pos]=med[indice];   /*Aqui falta ver si se puede hacer esto o bien hay que hacer elemento por elemento*/
	indice --;
}

int farmacos
