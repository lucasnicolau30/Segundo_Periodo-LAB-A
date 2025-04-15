#include <stdio.h> 
#include <stdlib.h> 

int **ler_matriz(int linhas, int colunas); 
void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas);
void imprimir_matriz(int **mat, int linhas, int colunas); 
void liberar_matriz(int **mat, int linhas); 

struct matriz{ 
    int linhas, colunas; 
    int **valores; 
}; 

int main(void){ 
    int k; 
    scanf("%d" , &k); 
    struct matriz *matrizes = (struct matriz*)malloc(k * sizeof(struct matriz));

    for(int i = 0 ; i < k ; i ++){ 
        scanf("%d %d" , &matrizes[i].linhas , &matrizes[i].colunas); 
        matrizes[i].valores = ler_matriz(matrizes[i].linhas , matrizes[i].colunas); 
    } 
    
    int i , j; 
    while(1){ 
        scanf("%d %d" , &i , &j); 
        if(i == 0 && j == 0){ 
            break; 
        }

        int linhas = (matrizes[i].linhas < matrizes[j].linhas) ? matrizes[i].linhas : matrizes[j].linhas; 
        int colunas = (matrizes[i].colunas < matrizes[j].colunas) ? matrizes[i].colunas : matrizes[j].colunas; 
        
        somar_matrizes(matrizes[i].valores , matrizes[j].valores , linhas , colunas); 
    } 
    
    imprimir_matriz(matrizes[0].valores , matrizes[i].linhas , matrizes[0].colunas); 
    
    for(int i = 0 ; i < k ; i ++){ 
        liberar_matriz(matrizes[i].valores , matrizes[i].linhas); 
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
        for(int j = 0 ; j < colunas ; j ++){ 
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

void liberar_matriz(int **mat, int linhas){ 
    for(int i = 0 ; i < linhas ; i ++){ 
        free(mat[i]); 
    } 
    free(mat); 
}
