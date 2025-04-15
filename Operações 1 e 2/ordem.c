#include <stdio.h> 

int main(void){ 
    int n1 , n2 , n3 , maior , menor , soma , intermediario; 
    scanf("%d" , &n1); scanf("%d" , &n2); 
    scanf("%d" , &n3); 
    soma = n1 + n2 + n3; 
    
    if(n1 >= n2 && n2 >= n3){ 
        maior = n1; menor = n3; 
    } 
    else if(n1 >= n3 && n3 >= n2){
        maior = n1; menor = n2; 
    } 
    else if(n2 >= n1 && n1 >= n3){ 
        maior = n2; menor = n3; 
    }
    else if(n2 >= n3 && n3 >= n1){ 
        maior = n2; menor = n1; 
    } 
    else if(n3 >= n1 && n1 >= n2){ 
        maior = n3; menor = n2; 
    }
    else if(n3 >= n2 && n2 >= n1){ 
        maior = n3; menor = n1; 
    } 
    
    intermediario = soma - maior - menor; 
    printf("%d %d %d \n" , menor , intermediario , maior); 
    
    return 0; 
}