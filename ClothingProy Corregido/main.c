#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_EMPLOYEES 1000
#define MAX_LINE_LENGTH 100

FILE *arc1;
FILE *arc2;
FILE *arc3;
FILE *arc5;
FILE *arc6;
FILE *arc4;
FILE *arc7;
FILE *arc8;
FILE *arc9;

typedef struct {
	int code;
	char talla[10];
	char color[40];
	char name[40];
	int compra;
} person;

typedef struct {
    int code;
    char name[40];
    char puesto[40];
	int salario;
} employee;

typedef struct {
	char imei[15];
	char reference[35];
	char damage[200];
	char date_start[128];
	char date_finish[128];
	int code_collaborator;
	int code_client;
	int code_Ventas;
	int code_Prenda;
	int status;
} cellphone;

struct deleteCliente{
    char code[6];
    char name[51];
    char position[31];
    float salary;
};


void registerPrenda() {
	char talla;
	person Prenda;
	printf("Por favor ingresar la referencia de la prenda: ", 162);
	scanf("%d", &Prenda.code);
	
	printf("Por favor ingresar el nombre de la prenda: ");
	fflush(stdin);
	gets(Prenda.name);
	
	printf("Por favor ingresar la talla de la prenda: ");
	fflush(stdin);
	gets(Prenda.talla);
	
	printf("Por favor ingresar el color de la prenda: ");
	fflush(stdin);
	gets(Prenda.color);
	
	printf("\n");
	
	arc1 = fopen("Prenda.txt", "a");
	
	
	if (arc1 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		//fprintf(arc2,"%d " " %s",Prenda.code,Prenda.name);
		fwrite(&Prenda, sizeof(Prenda), 1, arc1);
		fclose(arc1);
	}
	
	printf("TIPO DE PRENDA: %s\n", Prenda.name);
	printf("REFERENCIA: %d\n", Prenda.code);
	printf("TALLA: %s \n", Prenda.talla);
	printf("COLOR: %s \n", Prenda.color);
}

void searchPrenda() {
	int code;
	person Prenda;
	int encontrado = 0;
	
	
	printf("Ingrese la prenda que desea buscar: ");
	scanf("%d", &code);
	
	printf("\n");
	
	arc4 = fopen("Prenda.txt", "rb");
	
	if (arc4 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		while(fread(&Prenda, sizeof(Prenda), 1, arc4)) {
			if(Prenda.code == code){
				printf("TIPO DE PRENDA: %s\n", Prenda.name);
				printf("REFERENCIA: %d\n", Prenda.code);
				printf("TALLA: %s \n",Prenda.talla);
				printf("COLOR: %s \n",Prenda.color);
				encontrado = 1;
				break;	
			}
		}
		
		fclose(arc4);
		
		if(!encontrado){
			printf("No se enconrtro la prenda \n");
		}
	}
	
}

void searchPrendas() {
	person Prenda;
	int encontrado = 0;
	
	
	printf("Listas de todas las prendas: \n"); 
	
	printf("\n");

	arc4 = fopen("Prenda.txt", "rb");
	
	if (arc4 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		while(fread(&Prenda, sizeof(Prenda), 1, arc4)) {
			printf("TIPO DE PRENDA: %s\n", Prenda.name);
			printf("REFERENCIA: %d\n", Prenda.code);
			printf("TALLA: %s \n", Prenda.talla);
			printf("COLOR: %s \n",Prenda.color);
			printf("\n");
			encontrado = 1;
		
		}
		
		fclose(arc4);
		
		if(!encontrado){
			printf("No se enconrtro la prenda \n");
		}
	}
	
}

void deletePrendaVendida() {
    person Prenda;
    int code;
    int eliminados = 0;
    int encontrado = 0;
    
    printf("Ingrese la referencia de la prenda que desea eliminar: ");
    scanf("%d", &code);

    arc1 = fopen("Prenda.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");

   if (arc1 == NULL ) {
        printf("Error al abrir el archivo\n");
    } else {
        while(fread(&Prenda, sizeof(Prenda), 1, arc1)) {
            if(Prenda.code == code){
                encontrado = 1;
            } else {
                fwrite(&Prenda, sizeof(Prenda), 1, temp);
            }
        }

        fclose(arc1);
        fclose(temp);

        if(encontrado){
            remove("Prenda.txt");
            rename("temp.txt", "Prenda.txt");
            printf("Prenda eliminada exitosamente\n");
        } else {
            printf("No se enconrtro la prenda con la referencia ingresada\n");
        }
    }
}

void registerClient() {
	person client;

	
	printf("Por favor ingresar la identificaci%cn del cliente: ", 162);
	scanf("%d", &client.code);
	
	printf("Por favor ingresar el nombre del cliente: ");
	fflush(stdin);
	gets(client.name);
	
	printf("Por favor ingresar la cantidad de prendas compradas: ", 162);
	scanf("%d", &client.compra);
	
	arc2 = fopen("client.txt", "a");
	
	if (arc2 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		//fprintf(arc2,"%d " " %s",client.code,client.name);
		fwrite(&client, sizeof(client), 1, arc2);
		fclose(arc2);
	}
	printf("NOMBRE: %s\n", client.name);
	printf("CEDULA: %d\n", client.code);
	printf("CANTIDAD DE COMPRAS: %d \n",client.compra);

	
	printf("\n");
}

void searchClient() {
	int code;
	person client;
	int encontrado = 0;
	
	
	printf("Ingrese la cedula del cliente a buscar: ");
	scanf("%d", &code);
	
	arc3 = fopen("client.txt", "rb");
	

	
	if (arc3 == NULL ) {
		printf("Error al abrir el archivo\n");
	} else {
		while(fread(&client, sizeof(client), 1, arc3)) {
			if(client.code == code){
					printf("NOMBRE: %s\n", client.name);
					printf("CEDULA: %d\n", client.code);
					printf("CANTIDAD DE COMPRAS: %d \n",client.compra);
				encontrado = 1;
				break;	
			}
		}
		
		fclose(arc3);
		
		if(!encontrado){
			printf("No se enconrtro el cliente con el codigo ingresado\n");
		}
	}
	
}

void deleteClient() {
    int code;
    person client;
    int encontrado = 0;

    printf("Ingrese la cedula del cliente que desea eliminar: ");
    scanf("%d", &code);

    arc2 = fopen("client.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");

    if (arc2 == NULL ) {
        printf("Error al abrir el archivo\n");
    } else {
        while(fread(&client, sizeof(client), 1, arc2)) {
            if(client.code == code){
                encontrado = 1;
            } else {
                fwrite(&client, sizeof(client), 1, temp);
            }
        }

        fclose(arc2);
        fclose(temp);

        if(encontrado){
            remove("client.txt");
            rename("temp.txt", "client.txt");
            printf("Cliente eliminado exitosamente\n");
        } else {
            printf("No se enconrtr%c el cliente con el codigo ingresado\n", 162);
        }
    }
}
void addEmployee() {
    employee emp;
    printf("Por favor ingresar el codigo del empleado: ");
    scanf("%d", &emp.code);
    
    printf("Por favor ingresar el nombre del empleado: ");
    fflush(stdin);
    gets(emp.name);
    
    printf("Por favor ingrese el puesto asignado: ");
    fflush(stdin);
    gets(emp.puesto);
    
    printf("Por favor ingresar el salario asignado; ");
    scanf("%d", &emp.salario);
    
    arc5 = fopen("employee.txt", "a");
    
    if (arc5 == NULL) {
        printf("Error al abrir el archivo\n");
    } else {
        fwrite(&emp, sizeof(emp), 1, arc5);
        fclose(arc5);
    }
    
    printf("NOMBRE: %s\n", emp.name);
    printf("CODIGO: %d\n", emp.code);
    printf("PUESTO: %s \n", emp.puesto);
    printf("SALARIO: %d \n", emp.salario);
    
}

void searchEmployee() {
    int code;
    employee emp;
    int found = 0;
    
    printf("Ingrese el codigo del empleado que desea buscar: ");
    scanf("%d", &code);
    
    arc6 = fopen("employee.txt", "rb");
    
    if (arc6 == NULL) {
        printf("Error al abrir el archivo\n");
    } else {
        while (fread(&emp, sizeof(emp), 1, arc6)) {
            if (emp.code == code) {
                printf("NOMBRE: %s\n", emp.name);
    			printf("CODIGO: %d\n", emp.code);
    			printf("PUESTO: %s \n", emp.puesto);
    			printf("SALARIO: %d \n", emp.salario);
    
                found = 1;
                break;
            }
        }
        
        fclose(arc6);
        
        if (!found) {
            printf("No se encontro ningun empleado con el codigo ingresado\n");
        }
    }
}


void deleteEmployee() {
    int code;
    employee emp;
    int found = 0;
    
    printf("Ingrese el codigo del empleado que desea eliminar: ");
    scanf("%d", &code);
    
    arc6 = fopen("employee.txt", "rb");
    arc7 = fopen("temp.txt", "wb");
    
    if (arc6 == NULL || arc7 == NULL) {
        printf("Error al abrir los archivos\n");
    } else {
        while (fread(&emp, sizeof(emp), 1, arc6)) {
            if (emp.code != code) {
                fwrite(&emp, sizeof(emp), 1, arc7);
            } else {
                found = 1;
            }
        }
        
        fclose(arc6);
        fclose(arc7);
        
        if (found) {
            remove("employee.txt");
            rename("temp.txt", "employee.txt");
            printf("El empleado con codigo %d ha sido eliminado\n", code);
        } else {
            printf("No se encontro ningun empleado con el codigo ingresado\n");
        }
    }
}

int main(int argc, char *argv[])
{
	int opc, code;
	person datos;

	do {
		system("CLS");
		opc = menu();

		switch (opc)
		{
			case 1:    
				registerClient();
				break;
		
			case 2: 
				searchClient();
				break;
		
			case 3:
				deleteClient(); //Experimentar en el compu de marlon, hacer cambios
				break;
		
			case 4:
				registerPrenda();
				break;
		
			case 5:
				searchPrenda();
				break;
		
			case 6:
			    deletePrendaVendida(); //Experimentar en el compu de marlon, hacer cambios
				break;
		
			case 7:
				addEmployee();  //Revisar con marlon
				break;
		
			case 8:
				searchEmployee();  //Revisar con marlon
				break;
				
			case 9:
				deleteEmployee();   //Revisar con marlon
				break;
		
			case 10:
				searchPrendas();
				break;
				
			case 11:
				registerVentas();   
				break;
				
			case 12:
				totalVentas();   
				break;
			
			case 13:
				printf("Ha salido con exito", 162); 
				printf("\n");  
				break;
				
			default:
				printf("\nAmablemente le pedimos que aprenda a contar, selecciono una opcion distinta a los numeros que se encuentran entre el 1 y el 13\n\n");    
				break;
		}
		
		system("PAUSE");	
	} while (opc != 13);
	
	return 0;
}
