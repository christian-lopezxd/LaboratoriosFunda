#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<< "ingrese un numero:"<< endl;
    cin>> num1;
    cout<< "ingrese otro numero: " << endl;
    cin>> num2;

    float x= num1 % num2;

    if (x == 0)
    {
        cout<<"es divisible";
    }else
    {
        cout<<"no es divisible";
    }
    

}