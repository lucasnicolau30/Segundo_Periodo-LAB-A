#include <stdio.h> 

int multifatorial(int n1 , int n2){ 
    if(n1 <= 0){ 
        return 1; 
    } 
    return n1 * multifatorial(n1 - n2 , n2); 
}

int main(){ 
    int n1 , n2; 
    
    while(scanf("%d %d" , &n1 , &n2)){ 
        if(n1 == 0 && n2 == 0){ 
            break; 
        } 
        
        int resultado = multifatorial(n1 , n2); 
        printf("%d" , n1);
        
        for(int i = 0 ; i < n2 ; i++){ 
            printf("!"); 
        } 
        printf(" = %d\n" , resultado); 
    } 
    
    return 0; 
}