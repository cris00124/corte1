#include <stdio.h>
#include <math.h>







int main () {
	
	int num1,num2 ;
	char operacion;
	int suma,resta,multiplicacion,division ;

	
	
	printf("digita el primer numero \n") ; 
	scanf("%d",&num1) ;
	
	printf("digita el segundo numero \n") ; 
	scanf("%d",&num2) ;
	printf("Digite el s�mbolo \n");
	scanf("%c", &operacion);
	




	suma = num1+num2 ;
	resta = num1-num2 ;
		multiplicacion=num1*num2 ;
	division=num1/num2 ;
	
	
	printf("digita que operaci�n utilizaras...\n") ;
	printf("Escriba un s�mbolo que quiera ingresar(+,*,-,/)\n");
	scanf("%c",&operacion) ;
	
	if (operacion == '+') {
	
		
	printf("la suma es %d\n", suma) ;
	}
	else if (operacion == '-') {
		
	printf("la resta es %d\n ", resta ) ;
	}
	else if(operacion == '*'){
		printf("La multiplicaci�n de los n�meros es %d\n", multiplicacion);
	}
	else if (operacion == '/') {
		
	printf("la division es %d\n ",division ) ;}
	
	else{
		printf("Valor no v�lido");
	}
	}	
	
	

