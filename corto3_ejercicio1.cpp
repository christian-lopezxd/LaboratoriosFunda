#include <iostream>
using namespace std;

float sueldoreal(float a, float b);
float sueldototal(float total);

int main(){
    int n;
     
    cout<< "ingrese la cantidad de empleados"<< endl;
    cin>>n;
    for (int i = 0; i < n;i++)45
    {
     
    
float x,y;

cout<<"ingrese la cantidad de horas laborales"<< endl;
cin>> x;

cout<< "ingrese la cantidad de horas extras" << endl;
cin>>y; 
float a = x* 1.75;
float b = y*2.50;

float total= sueldoreal(a,b);
float f2= sueldototal(total);

cout<<"su sueldo deberia ser de $"<<total <<endl;
cout<< "su verdadero sueldo es $"<<f2 << endl; 
    }
}


float sueldoreal(float a,float b){

float ab = a+b;

return ab;

}

float sueldototal(float total){
float renta;
float seguro = total * 0.04;
float afp = total * 0.0625;
if (total >= 500)
{
   float renta= total * 0.10; 
}else
{
    float renta = 0;
}

float totalapagar= total - seguro - afp - renta;

return totalapagar; 
}