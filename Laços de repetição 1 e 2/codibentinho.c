#include <stdio.h> 

int main(){ 
    int vezes; 
    scanf("%d" , &vezes); 
    
    for(int i = 0 ; i < vezes ; i ++){ 
        int dia , temp; 
        scanf("%d %d" , &dia , &temp); 
        
        if((dia == 3 || dia == 5) && temp >=15){ 
            printf("jeans \n"); 
        } 
        else if((dia == 2 && temp > 23) || temp >= 25){ 
            printf("bermuda \n"); 
        } 
        else if(temp < 15){
            printf("F \n");
        } 
        else{ printf("jeans \n"); 
            
        } 
    } 
    
    return 0; 
}