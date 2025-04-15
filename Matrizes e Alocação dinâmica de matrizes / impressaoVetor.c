#include <stdio.h> 

void imprime_vet(int * vet , int tamanho){ 
    printf("{"); 
    for(int i = 0 ; i < tamanho ; i ++){
        printf("%d", vet[i]); 
        if(i < tamanho - 1){ 
            printf(", "); 
        } 
    } 
    printf("}"); 
    printf("\n"); 
} 

int main(){
    int tamanho; 
    scanf("%d", &tamanho); 
    int vet[tamanho]; 
    
    for(int i = 0 ; i < tamanho ; i ++){ 
        scanf("%d" , &vet[i]); 
    } 
    
    imprime_vet(vet , tamanho); 
    return 0;
}
