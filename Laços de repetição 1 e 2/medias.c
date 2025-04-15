#include <stdio.h> 

int main(void){ 
    int qntd; 
    float num , media; 
    
    while(scanf("%d" , &qntd) , qntd !=0){ 
        float soma = 0.0; 
        for(int i = 0 ; i < qntd ; i++){ 
            scanf("%f" , &num); 
            soma += num; 
        } 
        media = soma / qntd; 
        printf("%.2f \n" , media); 
    } 
    return 0; 
}