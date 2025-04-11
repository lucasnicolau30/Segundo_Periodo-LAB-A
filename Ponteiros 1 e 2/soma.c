#include <stdio.h> 

int soma(int *x, int *y); 

int main(void){ 
    int x, y; 
    scanf("%d %d", &x, &y); 
    printf("%d\n", soma(&x, &y)); 
} 

int soma(int *x, int *y){ 
    int soma = *x + *y; 
    return soma;
}