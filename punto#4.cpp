#include <stdio.h>

int main() {
    int num1, residuo, division, num_invertido;
    
    printf("para invertir el numero pon un numero de 2 digitos: ");
    scanf("%d", &num1);
    
    residuo = num1 % 10;
    division = num1 / 10;
    
    
    num_invertido = residuo * 10 + division ;
    
    
    printf("El número invertido es: %d\n", num_invertido);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
