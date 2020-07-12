//-+-+-+-+-+-+-+-+-+-+-Facturacion De Productos-+-+-+-+-+-+-+-+-+-+-
#include <iostream>
#include <string.h>
#include <math.h>
#include <conio.h>
using namespace std;

//Struct
const int Cad=20;

struct costoPorArticulo{
    char nombreArticulo[Cad+1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//FUNCIONES
void leerDatos(costoPorArticulo art[]);
void calcularCosto(costoPorArticulo art[], int cant);
void desplegarContenido(costoPorArticulo art[], int cantidad);
float valorTotalCompra(costoPorArticulo art[], int cantidad);

int cont = 0;

//LLAMAR FUNCIONES
int main(void){
    int cantidadDeProductos;
    
    cout<<"----FACTURA DE COMPRA---- \n \n";
    cout<<"ingrese la cantidad de productos de diferente clase: "<<endl;
    cin >> cantidadDeProductos;
    
    
    //arreglo donde se guardan los artículos
    costoPorArticulo articulos[cantidadDeProductos];

    //ciclo for para n productos
    for(int i=0; i<cantidadDeProductos; i++){
        leerDatos(articulos);
        cout<<"\n";
    }
    
    //llamando funciones
    calcularCosto(articulos, cantidadDeProductos);
    
    cout<<"\n----------------------------------------- \n \n";

    //mostrar todos los artículos
    desplegarContenido(articulos, cantidadDeProductos);
    valorTotalCompra(articulos, cantidadDeProductos); 
    

    getch();
    return 0;
}

//LEYENDO LOS DATOS

void leerDatos(costoPorArticulo art[]){
    //Variables
    char nombreArticulo[21];
    float precio;
    int cantidad;
    
    
    cout<<"\nIngrese el nombre del articulo: "<<endl;
    fflush(stdin);
    cin.getline(nombreArticulo, 20, '\n');
    cout<<"Ingrese la cantidad de elementos que va a llevar: "<<endl;
    cin >> cantidad;
    cout<<"Ingrese el precio del articulo: "<<endl;
    cin >> precio;
    cout<<"-----------------------------------------"<<endl;
    
    
    costoPorArticulo costo;
    
    //Llenar los campos
    for (int i = 0; i < 21; i++)
    {
        costo.nombreArticulo[i] = nombreArticulo[i];
    }
    
   
    costo.cantidad = cantidad;
    costo.precio = precio;
    
   
    art[cont] = costo;
    
    
    cont++;
}

//MULTIPLICANDO
void calcularCosto(costoPorArticulo art[], int cant){
    //Se recorre todo el arreglo
    for(int i=0; i<cant; i++){
       
    art[i].costoPorArticulo = art[i].precio * art[i].cantidad;
    }
}

//MOSTRANDO
void desplegarContenido(costoPorArticulo art[], int cantidad){
   
    for(int i=0; i<cantidad; i++){
    cout << "\n---- Articulo " << i+1 << " ----" << endl;    
    cout << "Nombre: " << art[i].nombreArticulo << endl;
    cout << "Cantidad: " << art[i].cantidad << endl;
    cout << "Precio: $" << art[i].precio << endl;
    cout << "Costo por articulo: $" << art[i].costoPorArticulo << endl;
    }
}

float valorTotalCompra(costoPorArticulo art[], int cantidad){

   float totalapagar;
    for (int i = 0; i < cantidad; i++)
    {
        
         totalapagar+= art[i].costoPorArticulo;

        
    }
    cout<<endl<<endl;
    
    cout<<"|Total a Pagar | $"<<totalapagar<<"   |"<<endl;
    

}
