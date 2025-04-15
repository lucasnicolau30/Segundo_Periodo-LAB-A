#include <stdio.h> 
#include <stdlib.h> 

int **ler_matriz(int linhas, int colunas); 
void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas);
void imprimir_matriz(int **mat, int linhas, int colunas); 
void liberar_matriz(int **mat, int linhas); 

int main(void){ 
    int n , m , k; 
    scanf("%d" , &k);
    scanf("%d %d" , &m , &n); 
    int ***matrizes = (int***)malloc(k * sizeof(int**)); 
    
    for(int i = 0 ; i < k ; i ++){ 
        matrizes[i] = ler_matriz(m , n); 
    }
    
    int i , j; 
    while(1){ 
        scanf("%d %d" , &i , &j); 
        if(i == 0 && j == 0){ 
            break; 
        } 
        
        somar_matrizes(matrizes[i] , matrizes[j] , m , n); 
    }
    
    imprimir_matriz(matrizes[0] , m , n); 
    for(int i = 0 ; i < k ; i ++){ 
        liberar_matriz(matrizes[i] , m); 
    } 
    free(matrizes); 
    return 0; 
}

int **ler_matriz(int linhas, int colunas){ 
    int **matriz = (int**)malloc(linhas * sizeof(int*)); 
    
    for(int i = 0 ; i < linhas ; i ++){ 
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    } 
    
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas ; j ++){ 
            scanf("%d" , &matriz[i][j]); 
        } 
    }
    return matriz; 
} 

void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas){ 
    for(int i = 0 ; i < linhas ; i ++){ 
        for(int j = 0 ; j < colunas; j ++){ 
            mat1[i][j] += mat2[i][j]; 
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

void liberar_matriz(int **mat,int linhas){ 
    for(int i = 0 ; i < linhas ; i ++){ 
        free(mat[i]); 
    } 
    free(mat); 
}
