#include <stdio.h> 
#include <string.h> 

void invertestr(char * src , char * dest){ 
    char * ptr = src; while(*ptr != '\0'){ 
        ptr ++; 
    } 
    
    while(ptr != src){
        ptr --; 
        *dest = * ptr; dest ++; 
    } 
    *dest = '\0'; 
} 

int main(){ 
    char original[101] , invertida[101]; 
    
    while(1){
        scanf("%100s" , original); 
        if(original[0] == '.'){ 
            break; 
        } 
        
        invertestr(original , invertida); 
        printf("%s -> %s \n" , original , invertida); 
    } 
    return 0;
}