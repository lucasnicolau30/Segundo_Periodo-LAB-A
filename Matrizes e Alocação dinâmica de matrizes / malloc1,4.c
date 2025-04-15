#include <stdio.h> 
#include <stdlib.h> 

int **ler_matriz(int linhas, int colunas){ 
    int **mat = malloc(linhas * sizeof(int*)); 
    for(int i = 0 ; i < linhas; i ++){ 
        mat[i] = malloc(colunas * sizeof(int)); 
    } 
    
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas ; j ++){
            scanf("%d" , &mat[i][j]); 
        } 
    } 
    return mat; 
} 

void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas){
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas ; j ++){ 
            mat1[i][j] = mat1[i][j] + mat2[i][j]; 
        } 
    } 
}

void imprimir_matriz(int **mat, int linhas, int colunas){ 
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas ; j ++){ 
            printf("%d " , mat[i][j]); 
        } 
        printf("\n"); 
    }
} 

void liberar_matriz(int **mat, int linhas){ 
    for(int i = 0 ; i < linhas ; i ++){
        free(mat[i]); 
    } 
    free(mat); 
} 

int main(void){ 
    int linhas , colunas; 
    scanf("%d %d" , &linhas , &colunas); 
    
    int **mat1 = ler_matriz(linhas , colunas); 
    int**mat2 = ler_matriz(linhas , colunas); 
    
    somar_matrizes(mat1 , mat2 , linhas , colunas); 
    imprimir_matriz(mat1 , linhas, colunas); 
    liberar_matriz(mat1 , linhas); 
    liberar_matriz(mat2 , linhas); 
    
    return 0; 
}
