#include <iostream>

using namespace std;
int funcion(int a, int b, int c);

int main(){
    int a, b, c;
     
    cout<<"digite hora en formato 24h"<<endl;
    cin>> a;
    cout<<"digite los minutos"<<endl;
    cin>>b;
    cout<<"digite los segundos"<<endl;
    cin>>c;
    int x= funcion(a, b, c);
    
return 0;



}

int funcion(int a, int b, int c){
    if ((a=23)&&(b=59)&&(c=59))
    {
        a=0;
        b=0;
        c=0;
    }else{
    if ((a<23)&&(b==59)&&(c==59))
    {
       a+=1;
        b=0;
        c=0;
    }
    if ((a!=23)&&(b!=59)&&(c==59))
    {
       b+=1;
        c=0;
    }
    if ((a<=23)&&(b<=58)&&(c<=58))
    {
        c+=1;
    }
    if ((a>=24)||(b>=60)||(c>=60))
    {
        cout<<"ingrese una hora valida"<<endl;
    }}
    if((a<24)||(b<60)||(c<60)){
    
    cout<<"su hora es "<<a<<":"<<b<<":"<<c;}
}