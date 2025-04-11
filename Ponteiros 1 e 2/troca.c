#include <stdio.h> 

void troca(int *x, int *y); 

int main(void){
    int N; int a, b;
    scanf("%d", &N); 
    for (int i = 0; i < N; i++){
        scanf("%d%d", &a, &b); 
        troca(&a, &b); 
        printf("%d %d\n", a, b); 
    } 
}

void troca(int *x, int *y){ 
    int guarda = *x; 
    *x = *y; 
    *y = guarda; 
}