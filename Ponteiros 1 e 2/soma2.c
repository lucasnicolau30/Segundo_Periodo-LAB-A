#include <stdio.h>  

void soma(int num1, int *num2, int *res, int **res_ptr){ 
    int soma = num1 + *num2; *res = soma; 
    *res_ptr = res; 
}

int main(void){ 
    int num1, num2; 
    int resultado; 
    int *resultado_ptr; 
    scanf("%d %d", &num1, &num2); 
    soma(num1, &num2, &resultado, &resultado_ptr); 
    printf("%d + %d = %d\n", num1, num2, *resultado_ptr); 
    return 0; 
}