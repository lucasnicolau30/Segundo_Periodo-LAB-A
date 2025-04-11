#include <stdio.h> 

void produto(int x, int y, int *resultado){ 
    *resultado = x * y; 
} 

int main(void){ 
    int num1, num2; 
    int resultado; 
    scanf("%d %d" , &num1 , &num2); 
    produto(num1 , num2 , &resultado); 
    printf("%d \n" , resultado);
}