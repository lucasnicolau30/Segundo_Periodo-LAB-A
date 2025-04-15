#include <stdio.h> 

int main(){ 
    int vezes , num; 
    while(scanf("%d" , &vezes)){ 
        scanf("%d" , &num); 
        if(vezes == 0 && num == 0){ 
            break; 
        } 
        for(int i = 0 ; i < vezes ; i ++){ 
            printf("%d" , num); 
        } 
    } 
    
    return 0; 
}