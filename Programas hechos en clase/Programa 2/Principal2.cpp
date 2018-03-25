#include "Personas.hpp"

main(){
       
  int edad;
  string nombre,sexo;
  float estatura;
  
  cout<<"Ingresa tu nombre:    "<<endl;
  cin>>nombre;
  cout<<"Ingresa tu edad:      "<<endl;
  cin>>edad;
  cout<<"Ingresa tu sexo:     "<<endl;
  cin>>sexo;
  cout<<"Ingresa tu estatura:    "<<endl;
  cin>>estatura;
  
  persona a;
  a.ConfiguraDatos(edad,nombre,sexo,estatura);
  
  a.ShowData();  
       
       
       
       
       
  
       }
