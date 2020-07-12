#include <iostream>
using namespace std;

int main(){
string pais;
float dinero; 
cout<< "ingrese pais" << endl; 
cin>> pais;
cout<< "ingrese cantidad de dinero:" <<endl;
cin>> dinero;

if(pais=="ElSalvador")
{
    float iva= dinero* 0.13;
    cout<< "total de iva a cancelar es de: " << iva;


} else
{
    if(pais=="Guatemala")
{

    float iva= dinero* 0.09;
    cout<< "total de iva a cancelar es de: " << iva;

}else
{
  if(pais=="Honduras")
{

    float iva= dinero* 0.15;
    cout<< "total de iva a cancelar es de: " << iva;


}else
{
   if (pais=="Espana")
{

    float iva= dinero* 0.20;
    cout<< "total de iva a cancelar es de: " << iva;


}
}

}

}
}