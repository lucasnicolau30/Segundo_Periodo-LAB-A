#include <stdio.h> 

int main(void){ 
    int horas , minutos , segundos; 
    scanf("%d" , &segundos); 
    horas = segundos / 3600; 
    segundos %= 3600; 
    minutos = segundos / 60; 
    segundos %= 60; 
    printf("%02d:%02d:%02d \n" , horas , minutos , segundos); 
    
    return 0; 
}