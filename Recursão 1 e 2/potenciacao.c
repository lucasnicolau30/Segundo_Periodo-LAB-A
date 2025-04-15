#include <stdio.h> 

long long potenciacao(int base , int expoente){ 
    if(expoente == 0){ return 1; } if(expoente % 2 == 0){
        long long meio = potenciacao(base , expoente / 2);
         return meio * meio; 
    } 
    else{ 
        return base * potenciacao(base , expoente - 1); 
    } 
} 
int main(){
    int base , expoente;
    
    while(scanf("%d %d", &base , &expoente)){ 
        if(base == -1 && expoente == -1){
            break; 
        } 
        printf("%lld\n" , potenciacao(base , expoente)); 
    } 
    
    return 0; 
}