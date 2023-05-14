#include <stdio.h>
#include <math.h>

int main () {
	
	
float num1 ;
float num2 ;
float num3 ;
int suma_num ;
float suma_numnum;

	
printf("escribe el primer digito \n") ;
scanf("%f",&num1) ;
	
printf("escribe el segundo digito \n") ;
scanf("%f",&num2) ;	
	
	printf("escribe el tercer digito \n") ;
scanf("%f",&num3) ;
	
	
	suma_num= num1+num2+num3 ; 
	
	printf("la suma de los numeros es de:%d
	 \n", suma_num ) ;
	
	

	float suma_reducion_10porcentaje ;
	float raiz_cuadrada ;	
	if (suma_num > 1000){
		
		suma_reducion_10porcentaje=suma_num*0.9 ;
			
		printf ("ya que es mayor a 1000 restamos el 10 porciento el resultado es: %f \n" ,suma_reducion_10porcentaje )	;
	
	
		
} 
else { 
	raiz_cuadrada=sqrt(suma_num) ;
	printf("ya que es menor de 1000 se mostrará la raiz cuadrada %f \n",raiz_cuadrada ) ;
	
	
}
	
} 



