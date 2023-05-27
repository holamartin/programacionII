#include <stdio.h>
#include "functionsystem.h"

FILE *arc8;
FILE *arc1;
FILE *arc12;

typedef struct {
	int code;
	int NumVent;
	char name[40];
} person;

int menu()
{
    int x;
    printf("                    TIENDA TODO A $30.000$  \n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("1)Registrar cliente  ");printf("  2)Buscar cliente  "); printf("  3)Eliminar cliente \n");
	printf("\n");
	printf("4)Registrar prenda   ");printf("  5)Buscar prenda  ");printf("   6)Eliminar prendas vendidas \n");
	printf("\n");
	printf("7)Empleado Nuevo       ");printf("8)Buscar empleado   ");printf("9)Eliminar empleado \n ");
	printf("\n");
	printf("10)Lista de prendas   ");printf(" 11)Ventas del dia  ");printf(" 12)Mostrar todas las ventas\n");
	printf("\n");
	printf("13)Salir\n");
	printf("\n");
	printf("Seleccione la opcion que necesite entre el #1 y el #13");
	printf("\n");
	scanf("%d",&x);
	
	return x;    
}

void registerVentas() {
	person Ventas;
	
	printf("Por favor ingrese el dia : ");
	fflush(stdin);
	gets(Ventas.name);
	
	printf("Por favor ingrese la cantidad de clientes del dia : ", 162);
	scanf("%d", &Ventas.code);
	
	printf("Por favor ingrese la cantidad ventas del dia : ", 162);
	scanf("%d", &Ventas.NumVent);
	
	printf("\n");
	
	arc8 = fopen("Ventas.txt", "a");
	
	if (arc8 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		//fprintf(arc2,"%d " " %s",Prenda.code,Prenda.name);
		fwrite(&Ventas, sizeof(Ventas), 1, arc8);
		fclose(arc8);
	}
	
	printf("DIA DE LA SEMANA: %s\n", Ventas.name);
	printf("CANTIDAD DE CLIENTES: %d\n", Ventas.code);
	printf("TOTAL DE VENTAS: %d \n",Ventas.NumVent);
	
}

void totalVentas(){

	person Ventas;
	int encontrado = 0;
	
	
	printf("Ventas de la semana: \n"); 
	
	printf("\n");

	arc12 = fopen("Ventas.txt", "rb");
	
	if (arc12 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		while(fread(&Ventas, sizeof(Ventas), 1, arc12)) {
			
			printf("DIA DE LA SEMANA: %s\n", Ventas.name);
			printf("CANTIDAD DE CLIENTES: %d\n", Ventas.code);
			printf("TOTAL DE VENTAS: %d \n",Ventas.NumVent);
			printf("\n");
			encontrado = 1;
		
		}
		
		fclose(arc12);
		
		if(!encontrado){
			printf("No hay ventas en la semana \n");
		}
	}
}
