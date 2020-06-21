#include <iostream>
using namespace std;

int bisiesto(int x);
int fecha(int x, int y, int z);
int fechabisi(int x, int y, int z);

int main()
{
    int x, y, z; //x=año y=mes z=dia
    cout << "ingrese year" << endl;
    cin >> x;
    cout << "ingrese mes" << endl;
    cin >> y;
    cout << "ingrese dia" << endl;
    cin >> z;

    int f = bisiesto(x);
    

    if (f == 0)
    {
        int p = fecha(x, y, z);
    }
    else
    {
        int q = fechabisi(x, y, z);
    }
}

int bisiesto(int x)
{
    int a;

    if (x % 400 == 0)
    {
        a = 1;
    }
    else
    {
        if ((x % 4 == 0) && (x % 100 != 0))
        {
            a = 1;
        }
        else
        {
            a = 0;
        }
    }
    return a;
}

int fecha(int x, int y, int z)
{

    if ((y == 2) && (z == 28)) //final de febrero
    {
        y += 1;
        z = 1;
        
    }else
    {
    
    if (((y == 4) || (y == 6) || (y == 9) || (y == 11)) && (z == 30)) //final de mes de 30 dias
    {
        y += 1;
        z = 1;
    }else
    {

    if (((y == 1) || (y == 3) || (y == 5) || (y == 7) || (y == 8) || (y == 10)) && (z == 31)) //final de mes de 31 dias
    {
        y += 1;
        z = 1;
    }else
    {

    if ((y == 12) && (z == 31)) //fin de año :)
    {
        x += 1;
        y = 1;
        z = 1;
    }else
    {
   
    if ((y == 2) && (z < 28)) //dia cualquiera de febrero
    {
        z += 1;
    }else
    {
    
    
    if (((y == 4) || (y == 6) || (y == 9) || (y == 11)) && (z < 30))
    {
        z += 1;
    }else{

    if (((y == 1) || (y == 3) || (y == 5) || (y == 7) || (y == 8) || (y == 10)) && (z < 31))
    {

        z += 1;
    }
    }}}}}}
    cout << "su fecha es:" << z << "/" << y << "/" << x << endl;
}

int fechabisi(int x, int y, int z)
{

    if ((y == 2) && (z == 29)) //final de febrero
    {
        y += 1;
        z = 1;
    }else{
    if (((y == 4) || (y == 6) || (y == 9) || (y == 11)) && (z == 30)) //final de mes de 30 dias
    {
        y += 1;
        z = 1;
    }else{

    if (((y == 1) || (y == 3) || (y == 5) || (y == 7) || (y == 8) || (y == 10)) && (z == 31)) //final de mes de 31 dias
    {
        y += 1;
        z = 1;
    }else{

    if ((y == 12) && (z == 31)) //fin de año :)
    {
        x += 1;
        y = 1;
        z = 1;
    }else{

    if ((y == 2) && (z < 29)) //dia cualquiera de febrero
    {
        z += 1;
    }else{

    if (((y == 4) || (y == 6) || (y == 9) || (y == 11)) && (z <= 29))
    {
        z += 1;
    }else{

    if (((y == 1) || (y == 3) || (y == 5) || (y == 7) || (y == 8) || (y == 10)) && (z <= 30))
    {

        z++;
    }
    }}}}}}
    cout << "su fecha es:" << z << "/" << y << "/" << x << endl;
}