#include <stdio.h> 
#include <stdlib.h> 

int codebench_exercicio_erro(void) { 
    puts("Erro! A funcao printf nao deve ser usada neste exercicio!"); 
    puts("Use a funcao `putchar()' para imprimir cada caracter."); 
    puts("Exemplo: putchar('#'); 
    imprime uma veze o caracter #"); 
    exit(EXIT_FAILURE); } 
    
    #define printf(...) 
    
    codebench_exercicio_erro() 
    #define puts(...) 
    codebench_exercicio_erro() 
    
    int main(void) {
        int x , y; 
        scanf("%d %d" , &x , &y); 
        putchar('+'); 
        
        for(int i = 0 ; i < 10 ; i ++){ 
            putchar('-'); 
        }
        putchar('+'); 
        putchar('\n'); 
        
        for(int i = 1 ; i <= 20 ; i ++){ 
            putchar('|'); 
            for(int j = 1 ; j <= 10 ; j ++){ 
                if(i >= x && i < x + 2 && j >= y && j < y+ 2){ 
                    putchar('#'); 
                } 
                else{ 
                    putchar('.'); 
                } 
            } 
            putchar('|'); 
            putchar('\n'); 
        }
        putchar('+'); 
        
        for(int i = 0 ; i < 10 ; i ++){ 
            putchar('-'); 
        } 
        putchar('+'); 
        putchar('\n'); 
    }