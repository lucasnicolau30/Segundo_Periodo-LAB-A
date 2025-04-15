#include <stdio.h> 

#define VAZIO 0 
#define MOEDA 1 
#define ZUMBI 5 

int main(void){ 
    int linhas , colunas , moed , vida , jogo;
    
    while(scanf("%d %d" , &linhas , &colunas) , linhas != 0 && colunas != 0){ 
        vida = 42; moed = 0; 
        int mat[linhas][colunas]; 
        
        for(int i = 0 ; i < linhas ;i ++){ 
            for(int j = 0 ; j < colunas ; j ++){ 
                scanf("%d" , &mat[i][j]); 
            } 
        } 
        
        char mov[200]; 
        scanf("%s" , mov);
        
        int i = 0 , j = 0; int cont = 0; 
        while(mov[cont] != 0 && vida >= 0){ 
            switch(mov[cont]){ 
                case 'D': 
                    j ++;
                    break; 
                case 'S': 
                    i ++; 
                    break; 
                case 'W': 
                    i --; 
                    break; 
                case 'A': 
                    j --; 
                    break; 
            }
        
            if(mat[i][j] == MOEDA){
                moed ++; 
                mat[i][j] = 0; 
            } 
            else if(mat[i][j] == ZUMBI) vida -= 5; cont ++; 
        }
        jogo ++; 
    
        if(vida < 0) vida = 0; 
    
        printf("\n"); 
        printf("Jogo %d\npos: %d, %d\nmoedas: %d\nvida: %d\n" , jogo , i , j , moed , vida); 
    } 
    return 0; 
} 
