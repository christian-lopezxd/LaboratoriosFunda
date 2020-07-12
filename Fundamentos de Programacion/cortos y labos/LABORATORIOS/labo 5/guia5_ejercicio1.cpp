#include <iostream>
#include <cmath>

using namespace std;

int funcion(int x, int y, int c, int mcd);

int main()
{
    int x, y, c, mcd;
    cout << "ingrese un numero entero" << endl;
    cin >> x;
    cout << "ingrese otro numero entero" << endl;
    cin >> y;

    int resp = funcion(x, y, c, mcd);
    cout << "el MCD es :" << resp;

    return 0;
}

int funcion(int x, int y, int c, int mcd)
{
    do
    {
        c= x % y;
        if (c != 0)
        {
        
        x=y;
        y=c;
        }else
        {
            int mcd=y;
        }
        
    } while (c != 0);
    
   
}