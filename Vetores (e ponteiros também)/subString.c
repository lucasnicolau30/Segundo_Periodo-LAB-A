#include <stdio.h> 
#include <string.h> 

#define MAX_LEN 201 

int eh_substring(const char *s , const char * z){ 
    int len_s = strlen(s); 
    int len_z = strlen(z); 
    
    for(int i = 0 ; i <= len_z - len_s ; i ++){ 
        int j; 
        for(j = 0 ; j < len_s ; j ++){ 
            if(z[i + j] != s[j]){ 
                break; 
            } 
        } 
        if(j == len_s){ 
            return 1; 
        } 
    }
    return 0; 
} 

int main(){ 
    char s[201] , z[201]; 
    
    while(1){ 
        scanf("%200s %200s", s , z); 
        if(strcmp(s , "FIM") == 0){ 
            break; 
        } 
        if(eh_substring(s , z)){ 
            printf("SIM \n"); 
        } 
        else{ 
            printf("NAO \n"); 
        } 
    } 
    return 0; 
}