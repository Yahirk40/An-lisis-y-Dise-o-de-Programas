//Archivo hpp

#include<iostream>


using namespace std;

class persona{
      private:    //Encapsulando ando
      int Edad;
      string Nombre;
      string Sexo;
      float Estatura;
      
      public: 
      void ConfiguraDatos(int,string,string,float);
      void ShowData();
      };
      
      
      void persona::ConfiguraDatos(int a,string b,string c ,float d){
           Edad=a;
           Nombre=b; 
           Sexo=c;
           Estatura=d;
           
         
           };
           
      void persona::ShowData(){
             
             cout<<"Nombre:   "<<Nombre<<endl;
             
             cout<<"Edad:   "<<Edad<<endl;
             cout<<"Sexo:   "<<Sexo<<endl;
             cout<<"Estatura:  "<<Estatura<<endl;    
             
             system("PAUSE");         
             };   
