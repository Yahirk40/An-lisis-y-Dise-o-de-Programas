/* Programa para controlar la entrada y salida de automoviles en un estacionamiento, 
con el fin de calcular la cantidad de vehiculos que ingresan
diariamente*/


#include <stdio.h>
#include <stdlib.h>





struct datos{
	char placas[10];
	int horaenthoras;
	int horaentminutos;
	int horasalhoras;
	int horasalminutos;
     
	
	
}datos;

/*Funcion para el registro de datos*/

void registro(){
	
	
	int diferenciahoras;
	int diferenciaminutos;
	

	
	printf("\nNumero de placa: \n");
	scanf("%s",&datos.placas);
	printf("\nIngrese Horas de entrada y salida en formato de 24 horas\n");
	printf("\n-Hora de entrada-\n");
	printf("\nHoras:  ");
    scanf("%i",&datos.horaenthoras);
	printf("\nMinutos: ");
	scanf("%i",&datos.horaentminutos);
	printf("\n-Hora de salida-\n");
	printf("\nHoras:  ");
	scanf("%i",&datos.horasalhoras);
	printf("\nMinutos: ");
	scanf("%i",&datos.horasalminutos);
	
	diferenciahoras=datos.horasalhoras-datos.horaenthoras;
	diferenciaminutos=datos.horasalminutos-datos.horaentminutos;
	
	if(diferenciahoras>0 ){
		
		
		printf("\nHay un cargo extra de 50 pesos\n");
		printf("\nFavor de pasar a cajas a pagar\n");
		
	}
	
	else if(diferenciahoras=0 , diferenciaminutos>=15){
		
		printf("\nHay un cargo extra de 50 pesos\n");
		printf("\nFavor de pasar a cajas a pagar\n");
			
	}
	
	else{
	
	printf("\nNo hay cargos extra\n");
       }
   
   
}

void repeticion(){
	int numerodeautos=1;
	int i;
	
	
	printf("\n¿Desea registrar otro auto?\n");
	printf("\t1-Si\n");
	printf("\t0-No\n");
	scanf("%i",&i);
	
	if (i==1){
		for(numerodeautos=0;numerodeautos<10;numerodeautos++){
		
		registro();
		}
	}
	else {
		puts("Gracias");
	
	
}
}


int main() {
	
	
	registro();
	repeticion();
	
	
	
	
	system("PAUSE");
	return 0;
}
