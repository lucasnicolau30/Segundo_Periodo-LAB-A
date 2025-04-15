#include <stdio.h> 

int main(void){ 
    int horas1 , minutos1 , segundos1 , soma1; 
    int horas2 , minutos2 , segundos2 , soma2; 
    int somaTotal , horasTotais ,minutosTotais , segundosTotais; 
    scanf("%d: %d: %d" , &horas1 , &minutos1 , &segundos1); 
    soma1 = (horas1 * 3600) + (minutos1 * 60) + segundos1; 
    scanf("%d: %d: %d" , &horas2 , &minutos2 , &segundos2); 
    soma2 = (horas2 * 3600) + (minutos2 * 60) + segundos2; 
    somaTotal = soma1 + soma2; 
    
    if(somaTotal >= 86400){ 
        somaTotal -= 86400; 
    } 
    horasTotais = (somaTotal / 3600) % 24; 
    minutosTotais = (somaTotal % 3600) / 60; 
    segundosTotais = somaTotal % 60;
    printf("%02d:%02d:%02d \n" , horasTotais , minutosTotais , segundosTotais); 
    return 0; 
}