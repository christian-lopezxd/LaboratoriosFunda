#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra;
    cout<< "ingrese una palabra"<< endl;
    cin>> palabra;

    int x = palabra.length();

    if (x > 10)
    {
        cout<<"La palabra tiene una longitud mayor a 10"<< endl;
    }else
    {
        cout<< "La palabra tiene una longitus menor a 10"<< endl;
    }

    if (x%2 == 0)
    {
        cout<<"La Longitud de su palabras es par"<< endl;
    }else
    {
        cout<<"La Longitud de su palabra es impar"<< endl;
    }
    


}