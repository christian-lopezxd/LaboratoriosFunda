#include <iostream>
using namespace std;

int bisiesto(int ano);

int main(){
int ano;
    cout<< "ingrese el ano"<< endl;
    cin>>ano; 

    int year = bisiesto(ano);
    if (year==1)
    {
        cout<<"su ano es bisiesto";
    }else
    {
        cout<< "este ano no es bisiesto";
    }

}

int bisiesto(int ano){
    int a;

    if (ano%400 == 0)
    {
       a=1;
    }else
    {
        if ((ano%4 == 0) && (ano%100 != 0)){
        a=1;
    }else
    {
        a=0;
    }
    

    }
    return a;
    

}