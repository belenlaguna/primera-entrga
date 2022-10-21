//belen guadalupe laguna hernandez
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>


using namespace std;

struct tienda
{
	//declaracion de variable

	int idcontrato, numoc, anyo;
	string proveedor, nombre, descripcion, categoria, caracteristicas, genero;
	float subtotal, iva, total;
}

videojuegos[3];
int opcion, busqueda;
string hola;



int main()
{




	do
	{
		printf("\t *MENU OPCIONES* \n");
		printf(" 1.-agregar \n 2.-modificar \n 3.-lista \n 4.-eliminar \n 5.-limpiar\n 6.-salir \n");
		scanf_s("%d", &opcion);

		switch (opcion)
		{
		case 1://agregar
			//capturar y guardar los datos por posicion
			for (int i = 0; i < 3; i++)
			{
				videojuegos[i].idcontrato = 20220000 + i;
				printf("ID CONTRATO: %d \n", videojuegos[i].idcontrato);
				int salida = 1;

				do
				{
					printf("ingrese el num oc \n");
					scanf_s("%d", &videojuegos[i].numoc);
				} while (videojuegos[i].numoc == videojuegos[i - 1].numoc || videojuegos[i].numoc == videojuegos[i - 2].numoc);


				//proveedor 
				printf("ingrese el nombre del articulo \n");
				cin.ignore();
				getline(cin, videojuegos[i].nombre);
				printf("ingrese la categoria del articulo \n");
				cin.ignore();
				getline(cin, videojuegos[i].categoria);
				printf("ingrese las carcteridticas del videojuego \n");
				cin.ignore();
				getline(cin, videojuegos[i].caracteristicas);
				printf("ingrese el genero del videojuego \n");
				cin.ignore();
				getline(cin, videojuegos[i].genero);
				printf("ingrese el año de lanzamiento \n");
				scanf_s("%d", &videojuegos[i].anyo);
				printf("ingrese el proveedor \n");
				cin.ignore();
				getline(cin, videojuegos[i].proveedor);
				printf("ingrese el subtotal \n");
				scanf_s("%f", &videojuegos[i].subtotal);
				videojuegos[i].iva = videojuegos[i].subtotal * .16;
				videojuegos[i].total = videojuegos[i].subtotal + videojuegos[i].iva;
				//compras[i].total =compras[i].subtotal*1.16;

			}
			system("pause");
			system("cls");
			return main();
			break;

		case 2: //modificar
			break;

		case 3:// lista

			int opc2;
			printf("1.- num OC \n 2.-Listas Vigentes");
			scanf_s("%d", &opc2);
			if (opc2 == 1)
			{
				printf("ingrese el num oc");
				scanf_s("%d", &busqueda);

				//imprimir los datos por posicion 
				for (int i = 0; i < 3; i++)
				{
					if (busqueda == videojuegos[i].numoc)
					{
						printf("ID CONTRATO: %d \n", videojuegos[i].idcontrato);
						printf("num OC: %d \n", videojuegos[i].numoc);
						//proveedor
						printf("proveedor %s", videojuegos[i].proveedor.c_str());
						printf("caracteristicas %s", videojuegos[i].caracteristicas.c_str());
						printf("categoria %s", videojuegos[i].categoria.c_str());
						printf("descripccion %s", videojuegos[i].descripcion.c_str());
						printf("anyo %d", videojuegos[i].anyo);
						printf("genero %s", videojuegos[i].genero.c_str());
						printf("subtotal: %f \n", videojuegos[i].subtotal);
						printf("iva: %f \n", videojuegos[i].iva);
						printf("total: %f \n", videojuegos[i].total);

					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (videojuegos[i].numoc != 0)
					{
						printf("ID CONTRATO: %d \n", videojuegos[i].idcontrato);
						printf("num OC: %d \n", videojuegos[i].numoc);
						//proveedor
						printf("proveedor %s", videojuegos[i].proveedor.c_str());
						printf("caracteristicas %s", videojuegos[i].caracteristicas.c_str());
						printf("categoria %s", videojuegos[i].categoria.c_str());
						printf("descripccion %s", videojuegos[i].descripcion.c_str());
						printf("anyo %d", videojuegos[i].anyo);
						printf("genero %s", videojuegos[i].genero.c_str());
						printf("subtotal: %f \n", videojuegos[i].subtotal);
						printf("iva: %f \n", videojuegos[i].iva);
						printf("total: %f \n", videojuegos[i].total);
					}
				}
			}


			return main();
			break;

		case 4://eliminar

			break;
		case 5://limpiar pantalla
			system("cls");
			return main();
			break;
		case 6://salir del programa
			printf("saliendo... \n");
			break;
		default:
			printf("intente denuevo... \n");
			break;
		}
	} while (opcion != 6);
	system("pause");
}