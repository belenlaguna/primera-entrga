//belen guadalupe laguna hernandez matricula:2128705//


#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{

    int numarticulo, anodelanzamiento, opcion;
    float precio, impuesto;
    string nombre, descripcion, categoria, caracteristicas, genero;

    cout << "\t ***videojuegos pixel*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;
        cout << "ingrese el nombre del articulo\n";
        cin.ignore();//me ignora el primer espacio 
        getline(cin, nombre); //permite ejecutar los espacios en la variable
        cout << "ingrese el categoria del articulo\n";
        cin.ignore();
        getline(cin, categoria);
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();
        getline(cin, categoria);
        cout << "ingrese las caracteristicas del videojuego\n";
        cin >> caracteristicas;
        cout << "ingrese el genero del videojuego\n";
        cin.ignore();
        getline(cin, genero);
        cout << "ingrese el impuesto añadido\n";
        cin>>impuesto;
        cout << "ingrese el año de lanzamiento del videojuego\n";
        cin>>anodelanzamiento;
        cout << "ingrese el precio_unitario\n";
        cin>>precio;
        
        
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("clean"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

}




