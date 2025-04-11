#include <stdio.h> 

int main(){ 
    int n; 
    int soma = 0; 
    double media; 
    int maiores = 0 , menores = 0; 
    scanf("%d", &n); int vet[n]; 
    
    for(int i = 0 ; i < n ;i ++){ 
        scanf("%d", &vet[i]); 
        soma += vet[i]; 
    } 
    
    media = (double)soma / n; 
    for(int i = 0 ; i < n ; i ++){ 
        int *p = &vet[i]; if(*p > media){ 
            maiores ++; 
        } 
        if(*p < media){ 
            menores ++; 
        } 
    } 
    printf("%d %d \n" , menores , maiores); 
    return 0; 
}