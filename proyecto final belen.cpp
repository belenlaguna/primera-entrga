#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<fstream>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

using namespace std;
//declaracion de variables 

int* numart, * anio, registros, desicion, n = 1;
string* nombre, * clasf, * caract, * descp, * gnr;
float* sub, * iva, * total;

//funciones tipó void
void alta();
void modificar();
void eliminar();
void lista();
void archivo();

int main()
{
	setlocale(LC_ALL, "spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int op;

	printf("\t chewy game market \n");
	printf("1.-Agregar Articulo \n2.-Modificar Articulo \n3.-Eliminar Articulo \n4.-Lista de Articulos \n5.-Limpiar pantalla \n6.-Salir \n");
	scanf_s("%d", &op);

	switch (op)
	{
	case 1:
		alta();
		system("pause");
		system("cls");
		return main();
		break;

	case 2:
		modificar();
		system("pause");
		system("cls");
		return main();
		break;

	case 3:
		eliminar();
		system("pause");
		system("cls");
		return main();
		break;

	case 4:
		lista();
		system("pause");
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		archivo();
		system("pause");
		system("cls");
		return main();
		break;


	}
}

void alta()
{
	printf("cuantos registros desea dar de alta\n");
	scanf_s("%d", &registros);
	numart = new  int[registros];
	anio = new  int[registros];
	nombre = new string[registros];
	clasf = new string[registros];
	caract = new string[registros];
	descp = new string[registros];
	sub = new float[registros];
	iva = new float[registros];
	total = new float[registros];


	for (int i = 0; i < registros; i++)
	{
		printf("ingrese el articulo\n");
		scanf_s("%d", &numart[i]);
		do
		{
			if (numart[i] != numart[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("el articulo ya existe\n");
				printf("ingrese el articulo\n");
				scanf_s("%d", &numart[i]);
			}
		} while (n < registros);
		printf("ingrese el año\n");
		scanf_s("%d", &anio[i]);
		printf("ingrese el nombre\n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("ingrese la clasificacion\n");
		getline(cin, clasf[i]);
		printf("ingrese las caracteristicas\n");
		getline(cin, caract[i]);
		printf("ingrese el genero\n");
		getline(cin, gnr[i]);
		printf("ingrese la descripcion\n");
		getline(cin, descp[i]);
		printf("ingrese el subtotal\n");
		scanf_s("%f", &sub[i]);
		iva[i] = sub[i] * .16;
		total[i] = sub[i] + iva[i];
		//preguntar si quiere dar de alta otra variable


	}
}

void eliminar()
{
	int eliminar;
	printf("ingrese el num de articulo que desea eliminar\n");
	scanf_s("%d", &eliminar);
	for (int i = 0; i < registros; i++)
	{
		if (eliminar == numart[i])
		{
			numart[i] = 0;
		}
	}
}

void modificar()
{
	int modificar, oop2;
	//switch
	do
	{
		printf("ingrese el num de articulo que desea modificar\n");
		scanf_s("%d", &modificar);
	} while (modificar <= 0);

	printf(" que desea modificar \n");
	printf("1.-numero de articulo\n2.-nombre \n3.genero \n4.-subtotal \n5.-todo \n");
	scanf_s("%d", &oop2);

	switch (oop2)
	{

	case 1:
		for (int i = 0; i < registros; i++)
		{
			if (modificar == numart[i])
			{
				printf(" ingrese un nuevo nombre\n");
				cin.ignore();
				getline(cin, nombre[i]);
			}
		}
		system("pause");
		system("cls");
		break;
	case 2:
		for (int i = 0; i < registros; i++)
		{
			if (modificar == numart[i])
			{
				printf(" ingrese un nuevo genero\n");
				getline(cin, gnr[i]);
			}
		}
		system("pause");
		system("cls");
		break;

	case 3:
		for (int i = 0; i < registros; i++)
		{
			if (modificar == numart[i])
			{
				printf(" ingrese el nuevo subtotal\n");
				scanf_s("%f", &sub[i]);
			}
		}
		system("pause");
		system("cls");
		break;

	case 4:

		for (int i = 0; i < registros; i++)
		{
			if (modificar == numart[i])
			{
				printf("ingrese el año\n");
				scanf_s("%d", &anio[i]);
				printf("ingrese el nombre\n");
				cin.ignore();
				getline(cin, nombre[i]);
				printf("ingrese la clasificacion\n");
				getline(cin, clasf[i]);
				printf("ingrese las caracteristicas\n");
				getline(cin, caract[i]);
				printf("ingrese el genero\n");
				getline(cin, gnr[i]);
				printf("ingrese la descripcion\n");
				getline(cin, descp[i]);
				printf("ingrese el subtotal\n");
				scanf_s("%f", &sub[i]);
				iva[i] = sub[i] * .16;
				total[i] = sub[i] + iva[i];
			}
		}
		system("pause");
		system("cls");
		break;

	}

}

void lista()
{
	int op3;
	string buscador;
	printf("de que manera desea buscar su videojuego\n");
	printf("1.-clasificaciom \n 2.-genero \n3.- salir");
	scanf_s("%d", &op3);
	switch (op3)
	{
	case 1:
		printf("ingrese la clasificacion a buscar\n");
		cin.ignore();
		getline(cin, buscador);
		for (int i = 0; i < registros; i++)
		{
			if (clasf[i] == buscador)
			{
				if (numart[i] != 0)
				{
					printf(" ARTICULO: % d", &numart[i]);
					printf(" AÑO: % d", &anio[i]);
					printf(" VIDEOJUEGO: % s", &nombre[i]);
					printf("CLASIFICACION: % s", &clasf[i]);
					printf(" GENERO: % d", &gnr[i]);
					printf("CARACTERISTICAS: % s", &caract[i]);
					printf(" DESCRIPCION: % s", &descp[i]);
					printf("SUBTOTAL: % f", &sub[i]);
					printf(" IVA: % f", &iva[i]);
					printf("TOTAL: % f", &total[i]);
				}
			}
		}
		system("pause");
		system("cls");
		break;


	case 2:
		printf("ingrese el genero a buscar\n");
		cin.ignore();
		getline(cin, buscador);
		for (int i = 0; i < registros; i++)
		{
			if (gnr[i] == buscador)
			{
				if (numart[i] != 0)
				{
					printf(" ARTICULO: % d", &numart[i]);
					printf(" AÑO: % d", &anio[i]);
					printf(" VIDEOJUEGO: % s", &nombre[i]);
					printf("CLASIFICACION: % s", &clasf[i]);
					printf(" GENERO: % d", &gnr[i]);
					printf("CARACTERISTICAS: % s", &caract[i]);
					printf(" DESCRIPCION: % s", &descp[i]);
					printf("SUBTOTAL: % f", &sub[i]);
					printf(" IVA: % f", &iva[i]);
					printf("TOTAL: % f", &total[i]);
				}
			}
		}
		system("pause");
		system("cls");
		break;

	}


}

void archivo()
{
	ofstream archivo;
	string archivogame;

	archivogame = " DATOS VIDEOJUEGOS";
	archivo.open(archivogame.c_str()), ios::out;

	if (archivo.fail())
	{
		printf("ERROR NO SE PUEDE CREAR ARCHIVO\n");
		system("pause");
		exit(1);
	}

	archivo << "\t\t INFORMACION\n";
	for (int i = 0; i < registros; i++)
	{
		archivo << " ARTICULO:" << numart[i];
		archivo << " AÑO:" << anio[i];
		archivo << " VIDEOJUEGO:" << nombre[i];
		archivo << "CLASIFICACION:" << clasf[i];
		archivo << " GENERO:" << gnr[i];
		archivo << "CARACTERISTICAS:" << caract[i];
		archivo << " DESCRIPCION:" << descp[i];
		archivo << "SUBTOTAL:" << sub[i];
		archivo << " IVA:" << iva[i];
		archivo << "TOTAL:" << total[i];
	}
}



