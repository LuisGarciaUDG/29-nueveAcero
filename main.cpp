
/* programa_17 Imprimir los numeros del 9 al 0
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 5 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;

    cout<<"\n Programa que imprime los numeros del 9 al 0";
    cout<<"\n\n Estrucutra de control while\n\n";
    for (x=9; x>=0; x--)
        {
        cout<<"\n "<<x;
        }
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}
