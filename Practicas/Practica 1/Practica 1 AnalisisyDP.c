#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datosc{
	   
       char nombre[30];
       float costob;
       float costoh;
       char nombrep[30];
	   char dest[20];
       }datosc[5];
       

       
       
       
void registro(){
	float costototal;
   	int d,e;
   	int i;
   	
   	char destino1d[10]="Tijuana";
   	char destino2d[10]="Cancun";
   	
   	
      for(i=0;i<5;i++){
	   
   	
   	fflush(stdin);
    printf("\n%i.Bienvenido a Viaja Facil\nTu Agencia de viajes confiable\n",i+1);
    printf("\n¿Cual es tu nombre?  \n");
    gets(datosc[i].nombre);
    printf("\nIngrese el costo del boleto:  \n");
    scanf("%f",&datosc[i].costob);
    printf("\nIngrese el costo del hotel:   \n");
    scanf("%f",&datosc[i].costoh);
    printf("\n¿Cual es el nombre del paquete?   \n");
    scanf("%s",&datosc[i].nombrep);
    printf("\n¿Cual es su destino?:   \n");
    scanf("%s",&datosc[i].dest);
    d=strcmp(datosc[i].dest,"Tijuana");
    e=strcmp(datosc[i].dest,"Cancun");
   
    
    
    if(strcmp(datosc[i].dest,"Tijuana")==0 ) {
    	
     	printf("\nNuestro Destino a Tijuana Tiene un descuento del 15 porciento \n");
     	printf("Por lo tanto");
     	costototal= (datosc[i].costoh + datosc[i].costob)*(.85);
     	printf("\nEl costo total de su viaje sera: %.2f \n",costototal);

	 }
	 else if(strcmp(datosc[i].dest,"Cancun")==0){
	 
	      printf("\nNuestro Destino a Cancun Tiene un descuento del 15 porciento \n");
	      
     	  costototal= (datosc[i].costoh + datosc[i].costob)*(.85);
     	  printf("\nEl costo total de su viaje sera: %.2f \n",costototal);
	 
	 }
	 else{
	 	costototal=(datosc[i].costoh + datosc[i].costob);
	 	printf("\nEl costo total de su viaje sera: %.2f \n",costototal);
	 }
	
        
        
		}   
		
		
	for(i=0;i<5;i++){
		
		printf("\n\n %i. Nombre: %s  ",i+1,datosc[i].nombre);
		printf("\n  Costo del Boleto: %.2f  ",datosc[i].costob);
		printf("\n  Costo del Hotel:  %.2f  ",datosc[i].costoh);
		printf("\n  Nombre del paquete: %s ",datosc[i].nombrep);
		printf("\n Destino:  %s ",datosc[i].dest);
		printf("Costo Total: %.2f",costototal);
		
	}	
		
		
   
    
}
            
       

       

int main()
{
    
    registro();
    
    
    
    
    
    
    
    
    
  
  system("PAUSE");	
  return 0;
}

