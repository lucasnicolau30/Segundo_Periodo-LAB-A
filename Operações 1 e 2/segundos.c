#include <stdio.h> 

int main(void){ 
    int horas , minutos , segundos , soma; 
    scanf("%d: %d: %d" , &horas , &minutos , &segundos); 
    soma = (horas * 3600) +(minutos * 60) + segundos; 
    printf("%d \n" , soma); 
    
    return 0; 
}