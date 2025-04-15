#include <stdio.h>
#include <limits.h> 

int main(){ 
    int num , menorPar = INT_MAX; 
    int flag = 0; 
    
    for(int i = 0 ; i < 10 ; i ++){ 
        scanf("%d" , &num); 
        if(num % 2 == 0){ 
            flag = 1; 
            if(num < menorPar){ 
                menorPar = num; 
            } 
        } 
    } 
    if(flag){ 
        printf("%d \n" , menorPar); 
    } 
    else{ 
        printf(":( \n"); 
    } 
    
    return 0; 
}