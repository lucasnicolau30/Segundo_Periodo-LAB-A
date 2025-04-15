#include <stdio.h> 
#include <stdlib.h> 

int mdc(int *n1 , int *n2){ 
    while(*n2 != 0){ 
        int temp = *n2; 
        *n2 = *n1 % *n2; 
        *n1 = temp; 
    } 
    return *n1; 
}

int main(){ 
    int *n1 = malloc(sizeof(int)); 
    int *n2 = malloc(sizeof(int)); 
    
    while(scanf("%d %d" , n1 , n2)){ 
        if(*n1 == 1 && *n2 == 1){ 
            break; 
        } 
        
        int resultado = mdc(n1 , n2); 
        printf("%d \n" , resultado);
    } 
    free(n1); 
    free(n2); 
    
    return 0; 
}
