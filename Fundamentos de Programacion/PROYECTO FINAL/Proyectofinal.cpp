#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

const int longCad = 20;
//Declarando Estructura
struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};
//Prototipos
int Lecturadedatos(costoPorArticulo articulos[], int n);
void calculandocosto(costoPorArticulo p);
void Desplegando(costoPorArticulo p);
int main(){
    int n;
    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"ingrese la cantidad de articulos a incluir"<<endl;
    cin>>n;
    cin.ignore(100, '/n');
    cout<<"pongame 10"<<endl;
    costoPorArticulo articulos[n];

int Lecturadedatos(costoPorArticulo articulos[], int n);

    
    
    
    


    getch();
    return 0;
}

int Lecturadedatos(costoPorArticulo articulos[], int n){

    for (int i = 0; i < n; i++)
    {
    
        cout<<"ingrese el nombre del articulo"<<endl;
    cin.getline(articulos[i].nombreArticul,longCad);
    cout<<"ingrese la cantidad a comprar de ese producto"<<endl;
    cin>>articulos[i].cantidad;
    cout<< "ingrese el precio del articulo"<<endl;
    cin>> articulos[i].precio;
    }
}
