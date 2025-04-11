#include <stdio.h> 

#define TETO_FAIXA_1 2259.20 
#define TETO_FAIXA_2 2826.65 
#define TETO_FAIXA_3 3751.05 
#define TETO_FAIXA_4 4664.68 

#define ALIQ_FAIXA_2 0.075 
#define ALIQ_FAIXA_3 0.15 
#define ALIQ_FAIXA_4 0.225
#define ALIQ_FAIXA_5 0.275 

void calcula_imposto(double renda, double deducoes, double *imposto, double *aliquota){ 
    *imposto = 0.0; 
    double dif = renda - deducoes; 
    if(dif <= TETO_FAIXA_1){ 
        *imposto = 0.0; 
    } 
    else if(dif <= TETO_FAIXA_2){ 
        *imposto = (dif - TETO_FAIXA_1) * ALIQ_FAIXA_2; 
    } 
    else if(dif <= TETO_FAIXA_3){
        *imposto = (TETO_FAIXA_2 - TETO_FAIXA_1) * ALIQ_FAIXA_2 + (dif - TETO_FAIXA_2) * ALIQ_FAIXA_3; 
    } 
    else if(dif <= TETO_FAIXA_4){ 
        *imposto = (TETO_FAIXA_2 - TETO_FAIXA_1) * ALIQ_FAIXA_2 + (TETO_FAIXA_3 - TETO_FAIXA_2) * ALIQ_FAIXA_3 + (dif - TETO_FAIXA_3) *ALIQ_FAIXA_4 ; 
    } 
    else{ 
        *imposto = (TETO_FAIXA_2 - TETO_FAIXA_1) * ALIQ_FAIXA_2 + (TETO_FAIXA_3 - TETO_FAIXA_2) * ALIQ_FAIXA_3 + (TETO_FAIXA_4 - TETO_FAIXA_3) * ALIQ_FAIXA_4 +(dif - TETO_FAIXA_4) *ALIQ_FAIXA_5; 
    } 
    *aliquota = (*imposto / renda) * 100; 
} 

int main(void){ 
    double renda;
    double deducoes; 
    double imposto, aliquota; 
    scanf("%le %le" , &renda , &deducoes); 
    calcula_imposto(renda, deducoes, &imposto, &aliquota); 
    
    if(imposto ==0.0){ 
        printf("isento \n"); 
    } 
    else{ 
        printf("%.2f \n" , imposto); 
        printf("%.2f%% \n" , aliquota); 
    } 
    return 0;
}