#include <iostream>
#include <math.h>
using namespace std;

int funcion(int numero, int dato, int contador);

int main()
{
    int numero;
    int dato = 84;
    int menu;
   int contador;
    cout << "Veamos si puede adivinar el numero que estoy pensando!" << endl;
    cout << "1. jugar " << endl;
    cout << "2.  Cerrar" << endl;
    cin >> menu;

    if (menu == 1)
    {
        int a = funcion(numero, dato, contador);

        
    }
    else
    {
        cout << "programa finalizado" << endl;
        
    }
    return 0;
}

int funcion(int numero, int dato, int contador)
{
 contador= 0;
    do
    {
        contador++;
        cout << "ingresa un numero" << endl;
        cin >> numero;
        if (numero > 84)
        {
            cout << "El numero es menor" << endl;
        }
        if (numero < 84)
        {
            cout << "El numero es mayor" << endl;
        }
        if (numero == 84)
        {
            cout << "Adivinaste!" << endl;
        }
        if (numero > 100)
        {
            cout << "te pasaste" << endl;
        }

        cout<< "numero de intentos :"<< contador<<endl;
    

    } while (numero != dato && contador < 5);
    
}
