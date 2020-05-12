#include <iostream>
#include <cmath>

//realizar un programa que nos devuelva el resultado de la formula cuadratica

using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cout<< "ingrese a:\n";
	cin>>a;
	cout<< "ingrese b:\n";
	cin>>b;
	cout<<"ingrese c:\n";
	cin>>c;
	
	int x1 = ((-1*b+(sqrt((pow(b,2)-4*a*b))))/(2*a));
	int x2 = ((-1*b-(sqrt((pow(b,2)-4*a*b))))/(2*a));
	
	cout<< "x1 vale:" <<x1;
	cout<< "x2 vale:" << x2;
	}