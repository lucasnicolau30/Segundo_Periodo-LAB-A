#include <stdio.h> 

int main(void){ 
    int n1 , n2 , n3 , diferenca; 
    scanf("%d" , &n1); 
    scanf("%d" , &n2); 
    scanf("%d" , &n3); 
    
    if(n1 >= n2 && n2 >= n3){
        diferenca = n1 - n3; 
        printf("%d \n" , diferenca); 
    } 
    else if(n1 >= n3 && n3 >= n2){ 
        diferenca = n1 - n2; 
        printf("%d \n" , diferenca); 
    } 
    else if(n2 >= nn1 && n1 >= n3){ 
        diferenca = n2 - n3; 
        printf("%d \n" , diferenca); 
    } 
    else if(n2 >= n3 && n3 >= n1){
        diferenca = n2 - n1; 
        printf("%d \n" , diferenca); 
    } 
    else if(n3 >= n1 && n1 >= n2){ 
        diferenca = n3 - n2; 
        printf("%d \n" , diferenca); 
    }
    else if(n3 >= n2 && n2 >= n1){ 
        diferenca = n3 - n1; 
        printf("%d \n" , diferenca);
    } 
    
    return 0; 
}