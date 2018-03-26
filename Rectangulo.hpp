#include<iostream>

using namespace std;

class Rectangulo{
private:
float Largo;
float Ancho;
public:
void Area();
void Perimetro();
Rectangulo(float,float);

};
Rectangulo::Rectangulo(float a,float b){
	Largo=a;
	Ancho=b;
	
}
	
void Rectangulo::Perimetro(){
	float perim;
	perim=(2*Largo)+(2*Ancho);
	cout<<"El perimetro es:  "<<perim<<endl;
	
	
	
	
}

void Rectangulo::Area(){
	float area;
	area=(Largo*Ancho);
	cout<<"El area es:  "<<area<<endl;
	
	
}







