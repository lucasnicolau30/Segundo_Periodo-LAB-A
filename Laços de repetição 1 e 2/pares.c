#include <stdio.h> 

int main(){ 
    int n , m; 
    
    while(scanf("%d %d" , &n , &m)){ 
        int soma = 0 , cont = n; 
        while(cont <= m){ 
            if(cont % 2 == 0){ 
                soma += cont;
            } 
            cont ++; 
        } 
        if(n == 0 && m == 0){ 
            break; 
        } 
        printf("%d \n" , soma); 
    } 
    
    return 0; 
}