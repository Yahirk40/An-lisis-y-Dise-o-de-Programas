#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
	
	
	cout<<"Digite su edad:   ";
	cin>>edad;
	cout<<"Digite su sexo:   ";
	cin>>sexo;
	cout<<"Digite su altura en metros:  ";
	cin>>altura;
	cout<<endl;
	
	
	strupr(sexo); //convierte la cadena a mayusculas
	
	
	cout<<"Edad:"<<edad<<endl;
	cout<<"Sexo:"<<sexo<<endl;
	cout<<"Altura:"<<altura<<" metros"<<endl;
	
	
	
	
	
	
	
}
