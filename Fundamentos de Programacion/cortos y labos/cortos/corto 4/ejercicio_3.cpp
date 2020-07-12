#include <iostream>
using namespace std;

float tabla(float matrix[100][100], int n);
float resultado(float matrix[100][100], float n);

int main(){
int n;
cout<<"ingrese el numero de alumnos"<<endl;
cin>>n;
float matrix[100][100];

float y = tabla(matrix, n);

float x= resultado(matrix, n); 


}

float tabla (float matrix[100][100], int n){

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cout<<"ingresa la nota numero "<<j+1<<" para el estudiante "<<i+1<<endl;
        cin>>matrix[i][j];
    }
    
}
}

float resultado(float matrix[100][100], float n){

    for (int i = 0; i < n; i++)
    {
        float notafinal= matrix[i][0]*0.20 + matrix[i][1]*0.20 +matrix[i][2]*0.20 +
        matrix[i][3]*0.20 +matrix[i][4]*0.20;
        
        if (notafinal>=6)
        {
           cout<<"El alumno "<<i+1<<" ha aprovado con una nota de "<< notafinal<<endl;
        }else
        {
            cout<<"El alumno "<<i+1<<" ha reprobado con una nota de "<< notafinal<<endl;
        }
        
        
    }
    


}