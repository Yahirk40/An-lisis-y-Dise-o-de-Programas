#include<iostream>   //libreria de entrada y salida
using namespace std; //para no colocar a que clase pertenece cout, unicamente en esta biblioteca




class Hora{
      private: // Todos los atributos son privados
      int hora;
      int minuto;
      int segundo;
      public:  //despues de los dos puntos todo es público
      
      void formato12();
      void formato24();
      void configuraatributos();
      
      }; // todas las clases terminan en punto y coma.
      
      //definicion de metodos
      
      void Hora::configuraatributos(){    //El metodo configuraatributos pertenece a la clase horas, (::) operador de pertenencia.
      
      
          cout << "ingresa la hora:  ";
          cin >> hora;
          cout << "Ingresa los minutos: ";
          cin >> minuto;
          cout << "Ingresa los segundos: ";
          cin >> segundo;
           
           
           
           };
           
           
      void Hora::formato12(){
           cout << ((hora==12||hora==0)? 12 :hora%12) <<":"
           <<minuto<<":"<<segundo<<(hora<12?"AM" : "PM");
           
           
           
           system("PAUSE");
           
           }
           
      void Hora::formato24(){
           cout<<hora<<":"<<minuto<<":"<<segundo<<"hrs";
           
           
           
           system("PAUSE");
           }     
           
           
           
           
           
           
           
           
           
