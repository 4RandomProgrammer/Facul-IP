#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>  

#define MAX 200
int checarAnagrama(char *str1, char *str2);

int main()
{
    char str1[MAX], str2[MAX];
    
    scanf("%[^\n]s", str1);
    scanf("%*c%[^\n]s", str2);

    if(checarAnagrama(str1, str2) == 1){
        printf("As strings são anagramas.\n");
    } 
    else{
        printf("As strings não são anagramas.\n");
    }
    return 0;
}
 
int checarAnagrama(char str1[], char str2[])
{
    int frequenciaChar1[256] = {0}, frequenciaChar2[256] = {0};
    int i;

    if(strlen(str1) != strlen(str2)){
        return 0;
    }
    for(i = 0; str1[i] != '\0'; i++){
        frequenciaChar1[str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++){
        frequenciaChar2[str2[i]]++;
    }

    for(i = 0; i < 256; i++){
        if(frequenciaChar1[i] != frequenciaChar2[i]){
            return 0;
        }
    }
    return 1;
}