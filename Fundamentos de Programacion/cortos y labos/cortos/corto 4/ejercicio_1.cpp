#include <iostream>
#include <cstring>
using namespace std;

string funcion(string palabra);

int main()
{

    string palabra;
    cout << "ingrese una frase" << endl;
    cin >> palabra;

    string y = funcion(palabra);

    cout << y << endl;

    return 0;
}

string funcion(string palabra)
{

    int y = palabra.length();
    char comparador[] = "0123456789";
    char murcielago[] = "murcielago";
    int j;
    int i;

    for (i = 0; i < y; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (palabra[i] == murcielago[j])
            {
                palabra[i] = comparador[j];
            }
        }
    }
    return palabra;
}