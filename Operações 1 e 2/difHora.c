#include <stdio.h> int main(void){ int horas1 , minutos1 , segundos1 , soma1; int horas2 , minutos2 , segundos2 , soma2; int diferenca; scanf("%d: %d:%d" , &horas1 , &minutos1 , &segundos1); soma1 = (horas1 * 3600) + (minutos1 * 60) + segundos1; scanf("%d: %d: %d" , &horas2 , &minutos2 , &segundos2);soma2 = (horas2 * 3600) + (minutos2 * 60) + segundos2; diferenca = soma1 - soma2; printf("%d \n" , diferenca); return 0; }