#include <iostream>
#include <conio.h>

using namespace std;

int llenar( int arreglo[100]);
int voltear(int arreglo[100], int arreglo2[100]);
int main()
{
    int arreglo[100];
    int arreglo2[100];
  
    int y= llenar(arreglo);
    int x= voltear(arreglo,arreglo2);
  
    getch();
    return 0;
}
int llenar(int arreglo[100]){
      for (int f = 0; f < 100; f++)
    {
        arreglo[f]=f*2+1;
    }
}

int voltear(int arreglo[100], int arreglo2[100]){

 int i;
    for (i = 0; i < 100; i++)
    {
        arreglo2[i] = arreglo[i];
    }
    int c;
    c = 1;
    for (int j = 99; j >= 0; j--)
    {
        cout << "el arreglo al reves en la posicion " << c++ << " es : " << arreglo2[j] << endl;
    }
}