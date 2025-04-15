#include <stdio.h> 

void preencherMat(int n){ 
    int mat[n][n]; 

    for(int i = 0 ; i < n ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            int camada; if(i < n / 2){ 
                camada = i; 
            } 
            else{ 
                camada = n - 1 - i; 
            } 
            
            int camadaCol; 
            if(j < n / 2){
                camadaCol = j; 
            } 
            else{ 
                camadaCol = n - 1 - j; 
            } 

            if(camadaCol < camada){ 
                camada = camadaCol; 
            } 
            mat[i][j] = (n / 2 - camada) + 1; 
        } 
    } 
    
    for(int i = 0 ; i < n ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            printf("%d ", mat[i][j]); 
        } 
        printf("\n"); 
    } 
} 

int main(){ 
    int n;
    
    do{ 
        scanf("%d", &n); 
    }while(n < 3 || n > 19 || n % 2 == 0); 
    
    preencherMat(n); 
    return 0; 
}