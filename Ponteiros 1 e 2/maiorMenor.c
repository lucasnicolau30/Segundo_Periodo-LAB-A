#include <stdio.h> 

int main(void){ 
    int variavel_escondida_1, variavel_escondida_2, variavel_escondida_3;
    int *num1 = &variavel_escondida_1; 
    int *num2 = &variavel_escondida_2; 
    int *num3 = &variavel_escondida_3; 
    int *maior, *menor;
    scanf("%d %d %d" , num1 , num2 , num3); 
    maior = num1; menor = num1; 
    
    if(*num2 > *maior){ 
        maior = num2; 
    } 
    if(*num2 < *menor){ 
        menor = num2; 
    } 
    if(*num3 >*maior){ 
        maior = num3; 
    } 
    if(*num3 < *menor){ 
        menor = num3; 
    } 
    
    printf("%d %d" , *menor , *maior); 
    return 0; 
}

