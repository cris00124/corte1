#include <stdio.h>
#include <math.h>


int main(){
	
	
	float dinero_invertido,periodo,porcentaje ;
	float valor_interes,valor_interes2,valortotal ;
	
	
	printf("escribe la cantidad de dinero invertido") ;
	scanf("%f", &dinero_invertido) ;
	
	printf("escribe el periodo de tiempo en dias") ;
	scanf("%f",&periodo) ;
	
	printf("escribe el porcentaje de interes") ;
	scanf("%f",&porcentaje) ;
	
	valor_interes=((dinero_invertido*porcentaje*periodo)/360);
	
	printf("los intereses obtenidos es de %f \n",valor_interes);
	 
	 
	 valor_interes2=valor_interes*0.7 ;
	 
	 valortotal=dinero_invertido+valor_interes-valor_interes2 ;
	printf("el valor total que retiro el cliente teniendo en cuenta el descuento del 7 porciento es:%f \n",valortotal) ;

	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

