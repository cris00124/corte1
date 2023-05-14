#include <stdio.h>
#include<math.h>


int main (){
	
	float salario,salud,pension;
	int total;
	
	
	printf("¿Cuál es su salario?");
	scanf("%f", &salario);
	
	
	salud = (salario * 4)/100;
	pension = (salario*4)/100;
	  
	total = salario-(salud+pension);
	
	printf("Su descuento por salud es de %f\n", salud);
	
	
	printf("Su descuento por pensión es de %f \n", pension);
	
	printf("Su salario neto es de %d \n", total);  
	
	
	
	
	
	
	
	
	
	
	
}



