#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra;
    cout<< "ingrese palabra"<<endl;
    cin>> palabra; 

    char x = palabra[0];
    char y = palabra.back();

    if (x==y)
    {
        cout<<"la primer letra es igual a la ultima";
    }else
    {
        cout<<"La primer letra no es igual a la ultima";
    }
    
    


}