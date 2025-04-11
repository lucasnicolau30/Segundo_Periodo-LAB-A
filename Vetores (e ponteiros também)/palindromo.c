#include <stdio.h> 
#include <string.h>

#define STR_PALIN "%s: palindromo\n" 
#define STR_NORMAL "%s: normal\n" 

int palindromo(char *palavra){ 
    int n = strlen(palavra); 
    for(int i = 0 ; i < n/ 2 ; i ++){ 
        if(palavra[i] != palavra[n - 1 - i]){ 
            return 0; 
        } 
    } 
    return 1; 
} 

int main(void){
    char palavra[41]; 
    int num_palavras; 
    scanf("%d", &num_palavras); 
    
    while (num_palavras--){ 
        scanf("%s", palavra); 
        if (palindromo(palavra)){ 
            printf(STR_PALIN, palavra); 
        } 
        else{ 
            printf(STR_NORMAL, palavra); 
        } 
    } 
}