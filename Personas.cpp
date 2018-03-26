#include <iostream>
#include<stdlib.h>

using namespace std;

class persona{
	private:
	int edad;
	string nombre;
	public:
	persona(int,string); //Constructor
	void leer();
	void correr();
};

persona::persona(int a,string b){

edad=a;
nombre=b;



}
void persona::leer(){
	
	
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
	
	
}

void persona::correr(){
	
	cout<<"Soy "<<nombre<<" y estoy corriendo"<<endl;
}



int main(){
	persona p1= persona(18,"Yahir");
	persona p2=persona(12,"Daniel");
	persona p3=persona(23,"Lois");	
	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();
return 0;
system("PAUSE");
}
