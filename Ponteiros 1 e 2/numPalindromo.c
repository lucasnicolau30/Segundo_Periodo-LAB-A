#include <stdio.h> 

int inverte(int num){ 
    int invertido = 0;
    while(num > 0){ 
        invertido = invertido * 10 + num % 10; 
        num /= 10; 
    } 
    return invertido; 
} 

void quebra(int num, int *milhao, int *milhar, int *centena){ 
    * centena = num % 1000; 
    num /= 1000; 
    * milhar = num % 1000; 
    num /= 1000; 
    * milhao = num;
} 

int main(void){ 
    int num; 
    while(scanf("%d" , &num)){ 
        if(num == 0){ 
            break; 
        }
        int milhao = 0 , milhar = 0 , centena = 0; 
        quebra(num, &milhao, &milhar, &centena); 
        if(num >= 1000000){ 
            printf("%d.%.3d.%.3d" , milhao , milhar , centena); 
        } 
        else{ 
            printf("%d" , num); 
        }
        if(num == inverte(num)){ 
            printf(": palindromo \n"); 
        } 
        else{ 
            printf(": normal \n"); 
        } 
    } 
    return 0; 
}