#include <iostream>
using namespace std;

bool funcion(int a);

int main(){

    int a;
    cout<<"ingrese year"<<endl;
    cin>>a;

    bool y= funcion(a);
    if (y==true)
    {
        cout<<"si es bisiesto";

    }if(y==false)
    {
        cout<<"no es bisiesto";
    }
    

    return 0;
}

bool funcion(int a){
    bool x;
    if (a%400 == 0)
    {
        x=true;
    }
    else {if ((a%4 == 0)&&(a%100 != 0))
    {
        x=true;
    }
    else
    {
        x= false;
    }}
    
    return x;
}