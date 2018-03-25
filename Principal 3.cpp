#include "Electronica.hpp"
int main(){
 Resistencia uno;
 Resistencia dos(130,1.0,0.25);
 int a;
 float b,c;
 cout<<"Ingrese el valor de banda de la resistencia:  "<<endl;
 cin>>a;
 cout<<"Ingrese el valor de potencia de la resistencia:  "<<endl; 
 cin>>b;   
 cout<<"Ingrese el valor de tolerancia de la resistencia:  "<<endl;
 cin>>c;
 Resistencia tres(a,b);
 Resistencia cuatro (a);
 Resistencia cinco(c);
 
 uno.Proteger();
 dos.Proteger();
 tres.Proteger();
 cuatro.Proteger();
 cinco.Proteger();
 system("PAUSE");
}


