#include <stdio.h> 

int eh_par(int n){ 
    int par; 
    if(n == 0){ 
        par = 1; 
    } 
    else{ 
        if(eh_par(n - 1) == 1){ 
            par = 0; 
        } 
        else{ 
            par = 1; 
        } 
    } 
    return par; 
} 

int main(){ 
    int n;
     
    while(scanf("%d" , &n)){ 
        if(n == -1){ 
            break; 
        } 
        if(eh_par(n)){ 
            printf("%d eh par\n" , n); 
        } 
        else{ 
            printf("%d eh impar\n" , n); 
        } 
    } 
    return 0; 
}