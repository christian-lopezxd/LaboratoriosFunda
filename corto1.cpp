#include <iostream>
using namespace std;
int main (){
    int color;
cout<< "los colores disponibles son: \n 1. negro \n 2. amarillo \n 3. rojo \n 4. anaranjado \n 5. azul"<< endl; 
cout<< "dijite el numero del color que desea:"<< endl;
cin>> color;
switch (color)
{
case 1:
    cout<<"ganaste $3 dolares!"<<endl;
    break;
    case 2:
    cout<<"ganaste $100 dolares!"<<endl;
    break;
    case 3:
    cout<<"ganaste $50 dolares!"<<endl;
    break;
    case 4:
    cout<<"ganaste $10 dolares!"<<endl;
    break;
    case 5:
    cout<<"ganaste $2 dolares!"<<endl;
    break;
}
}