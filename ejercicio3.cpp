#include <iostream>
#include <cmath>

//realizar un programa que nos devuelva el resultado de la formula cuadratica

using namespace std;

int main(){
	float a;
	float b;
	float c;
	
	cout<< "ingrese a:\n";
	cin>>a;
	cout<< "ingrese b:\n";
	cin>>b;
	cout<<"ingrese c:\n";
	cin>>c;
	
	float x1 = ((-1*b+(sqrt((pow(b,2)-4*a*b))))/(2*a));
	float x2 = ((-1*b-(sqrt((pow(b,2)-4*a*b))))/(2*a));
	
	cout<< "x1 vale:" <<x1;
	cout<< "x2 vale:" << x2;
	}