#include <stdio.h> 

void imprime_vetor(int *vet, int tam){ 
    printf("{"); 
    for(int i = 0 ; i < tam ; i ++){ 
        printf("%d", vet[i]); 
        if(i < tam - 1){ 
            printf(", "); 
        } 
    } 
    printf("}"); 
} 

void imprime_matriz(int altura, int largura, int matriz[][largura]){ 
    printf("{");
    for(int i = 0 ; i < altura ; i ++){ 
        imprime_vetor(matriz[i] , largura); 
        if(i < altura - 1){ 
            printf(", \n"); 
        } 
    } 
    printf("}"); 
    printf("\n"); 
}

int main(void){ 
    int altura, largura; 
    scanf("%d%d", &altura, &largura); 
    int matriz[altura][largura]; 
    
    for(int i = 0 ; i < altura ; i ++){ 
        for(int j = 0; j < largura ; j ++){ 
            scanf("%d" , &matriz[i][j]); 
        } 
    } 
    
    imprime_matriz(altura, largura, matriz); 
    return 0; 
}