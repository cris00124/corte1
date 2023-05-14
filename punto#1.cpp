

#include <stdio.h>
#include <math.h>


int main () {
	
//formulas 

const float pi = 3.1416 ;


	
	float radio ;
	float area ;
	float valor_radio ;
	float valor_area ;
	
	
printf("escribe un valor para radio ") ;
scanf("%f", &radio);
	
printf("escribe un valor para area ") ;
scanf("%f", &area);
	
	
valor_radio = (pi * (radio*radio)* area);	
	
printf("el valor del volumen es de:%f \n" ,valor_radio) ;


valor_area =((2*pi)*(radio*area)+(2*pi)*(radio*radio)) ;

printf("el valor del area es de:%f \n", valor_area) ;


	
	
	
	
	
	
	
	
	
	
}














