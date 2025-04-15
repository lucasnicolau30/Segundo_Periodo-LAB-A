#include <stdio.h> 

void transposta(int linhas , int colunas , int entrada [][colunas] , int saida[][linhas]){ 
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas ; j ++){ 
            saida[j][i] = entrada[i][j]; 
        } 
    } 
} 

int main(){ 
    int linhas , colunas; 
    scanf("%d %d" , &linhas , &colunas);
    int entrada[linhas][colunas]; 
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas ; j ++){ 
            scanf("%d" , &entrada[i][j]); 
        } 
    } 
    int saida[colunas][linhas]; 
    transposta(linhas , colunas , entrada , saida); 

    for(int i = 0 ; i < colunas ; i ++){ 
        for(int j = 0 ; j < linhas ; j ++){ 
            printf("%d " ,saida[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("diagonal: "); 
    
    for(int i = 0 ; i < colunas ; i ++){ 
        for(int j = 0 ; j < linhas ; j ++){ 
            if(i == j){ 
                printf("%d " , saida[i][j]); 
            } 
        } 
    } 
    printf("\n"); 
    return 0; 
}
