#include <iostream>

using namespace std;

int main(){
    string producto;
    float precio;
    int cantidad;

    cout<< "ingrese nombre de producto\n";
    cin>> producto;
    cout<< "ingrese precio\n";
    cin>> precio;
    cout<<"ingrese cuantos compro \n";
    cin>> cantidad;

    cout<< " usted compro "<< producto<< " y gasto "<< precio*cantidad;

}