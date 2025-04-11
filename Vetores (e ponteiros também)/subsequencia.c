#include <stdio.h> 

void subsequente(int * vet , int a , int b){ 
    if(a > b){ 
        int temp = a; 
        a = b; 
        b = temp; 
    } 
    
    while(a < b){ 
        int temp = vet[a]; 
        vet[a] = vet[b]; 
        vet[b] = temp; 
        a ++; b --; 
    } 
} 

int main(){ 
    int n; 
    scanf("%d", &n); 
    int vet[n];
    
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d", &vet[i]); 
    } 
    
    int a , b; 
    while(1){ 
        scanf("%d %d" , &a , &b);
        if(a == -1 && b == -1){ 
            break; 
        } 
        
        subsequente(vet , a , b); 
    } 
    
    for(int i = 0 ; i < n ; i ++){
        printf("%d", vet[i]); 
        if(i < n - 1){ 
            printf(", "); 
        } 
    } 
    printf(". \n"); 
    return 0; 
}