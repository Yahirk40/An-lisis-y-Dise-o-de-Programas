#include<iostream>


using namespace std;

class Resistencia{
      private:
      int ValordeBanda;        
      float Potencia;
      float Tolerancia;
      
      public:
      //Constructores
             
      Resistencia();       
      Resistencia(int,float,float);
      Resistencia(int,float);
      Resistencia(int);
      Resistencia(float);      
      void Proteger();
      
             
      
      };
      
Resistencia::Resistencia(){
                           
                 ValordeBanda=0;
                 Potencia=0;
                 Tolerancia=0;
                           
                           
                           
                           
                           
                           }
                           
                           
                           
                           
 Resistencia::Resistencia(int a,float b,float c){
                              
 ValordeBanda=a;
 Potencia=b;  
 Tolerancia=c;       
}                 

Resistencia::Resistencia(int a,float b){
                             
                             ValordeBanda=0;
                             Potencia=b;
                             Tolerancia=0.0;
                             
                             
                             
                             }
                              
 Resistencia::Resistencia(int a){
                              
                      ValordeBanda=a;
                      Potencia=0;
                      Tolerancia=0;
                                                   
                              
                              
                              }   
                              
 Resistencia::Resistencia(float a){
                                
  ValordeBanda=0;
  Potencia=0.0;
  Tolerancia=a;
}



void Resistencia::Proteger(){
     cout<<"La resistencia de: "<<ValordeBanda<<"protege los componentes"<<endl;
     
    
     }                              
                                
                                
                                
                                
                                
                                    
                                
                                                                                
