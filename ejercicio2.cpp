#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    float area;
    float per;
    cout<< "ingrese radio:\n";
    cin>> r;



    area= (pow(r,2))*3.14;

    cout<<"\n area igual a:\n" <<area;


    per = (2*3.15*r);
    cout<<"\n el perimetro es:\n" <<per;

return 0;

}