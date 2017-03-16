#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include "pila.h"
#include "cola.h"
using namespace std;


int main()
{
    Cola<char,50> myCol;
    Pila<char,50> myPila;
    myPila.inicializa();
    myCol.inicializa();
    int opcion;
    string a;
    cout << "Ingrese la cadena para convertirla" << endl;
    cin >> a;
    char *y= strdup(a.c_str());
    int x = a.length();
    for(int contador = 0; contador<=x; contador++)
    {
        char e = y[contador];
        myPila.push(e);
        myCol.enqueue(e);
    }
    do
    {
        cout << "Como la desea convertir" << endl;
        cout << "1. Notacion posfija (Pila)" << endl;
        cout << "2. Notacion infija (Cola)" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            system("cls");
            myPila.separar();
            myPila.imprimir();
            system ("pause");
            return 0;
            break;
        case 2:
            system("cls");
            myCol.imprimir();
            system ("pause");
            return 0;
            break;
        case 3:
            return 0;
            break;

        }
    }
    while (opcion !=3);
    return 0;
}

