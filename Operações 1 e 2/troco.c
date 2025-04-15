#include <stdio.h> 

void imprime_saida(int galeoes, int sicles, int nuques){ 
    int vg , vs , vn , pg , ps , pn , totalVN , totalPN , troc;
    scanf("%d %d %d %d %d %d" , &vg , &vs , &vn ,&pg , &ps , &pn); 
    totalVN = (vg * 493) + (vs * 29) + vn; 
    totalPN = (pg * 493) + (ps * 29) + pn;
    troc = totalPN - totalVN; 
    galeoes = troc / 493; 
    sicles = (troc % 493) / 29; 
    nuques = (troc % 493) % 29;
    printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!\n", galeoes, sicles, nuques); 
} 

int main(void){ 
    int galeoes = 0; 
    int sicles = 0; 
    int nuques = 0; 
    imprime_saida(galeoes, sicles, nuques); 
    return 0; 
}