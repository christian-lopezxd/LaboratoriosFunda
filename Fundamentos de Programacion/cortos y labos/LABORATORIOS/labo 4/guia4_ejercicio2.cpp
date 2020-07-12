#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<< "ingrese un numero:"<< endl;
    cin>> num1;

    int x= num1%2;
    if (x==0)
    {
        cout<<"es par";
    }else
    {
        cout<<"es impar";
    }
    
    

}