#include <iostream>
#include <conio.h>
using namespace std;

int main(){

int arreglo[100], x, num=0, d=0;

cout<<"ingrese la cantidad de elementos que el arreglo contiene"<<endl;
cin>>x;
cout<<"ingrese el numero a cuantificar: "<<endl;
cin>>num;
cout<<"usted solo puede ingresarle "<<x<<" numeros al arreglo"<<endl;

for (int i = 0; i < x; i++)
{
    cout<<i+1<<". ingrese un numero:"<<endl;
    cin>>arreglo[i];

    if (arreglo[i]== num)
    {
        d++;
    }
    
}

cout<< "el numero "<<num<< " se repite "<< d << " veces ";
getch();
return 0;


}