#include <stdio.h> 

void simplifica_fracao(int *numerador , int *denominador){ 
    int mdc; 
    for(int i = 1 ; i <= *numerador ; i ++){ 
        if(*numerador % i == 0&& *denominador % i == 0){
            mdc = i; 
        } 
    } 
    *numerador = *numerador / mdc; 
    *denominador = *denominador / mdc; 
} 

int main(){
    int num , den; 
    while(scanf("%d %d" , &num , &den)){ 
        if(den == 0 && num == 0){ 
            break; 
        } 
        
        simplifica_fracao(&num , &den); 
        printf("%d/%d \n" , num , den);
    } 
    return 0; 
}