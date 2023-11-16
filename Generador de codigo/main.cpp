#include <iostream>
#include <stdlib.h>
#include <string>
#include "list.h"
#include "sintacti.h"

using namespace std;

int main()
{
    Sintactico sintactico("test.txt", 1);
    return 0;
}


/*using namespace std;
int main()
{
    string expresion;
    int opc = 0, n = 0;
    List<char> pila;
    do
    {
        cout << endl
             << "[1] Salir del programa" << endl;
        cout << "[2] Escribir una expresion a convertir" << endl;
        cout << endl
             << endl
             << "Que opcion elijes: ";
        cin >> opc;
        cout << endl;
        switch (opc)
        {
        case 1:
            cout << "Gracias por usar el conversor";
            break;
        case 2:
            cout << "Escribe la expresion algebraica a convertir: ";
            cin >> expresion;
            for (int i = 0; i < expresion.size(); i++)
            {
                pila.reconocimiento(expresion[i]);
            }
            pila.expresionFinal();
            break;
        default:
            cout << "Opcion no valida, intenta de nuevo" << endl;
            break;
        }
    } while (opc != 1);
    return 0;
}
*/