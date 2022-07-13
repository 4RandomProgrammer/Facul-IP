
#include <stdio.h>
#include <string.h>
 
int main()
{
    FILE *fp1;
    FILE *fp2;
     
    int count       = 0;
    int posicao    = 0;
    int qtdBytes    = 0;
    char arquivo1[200], arquivo2[200]; 
    char buffer[1024];
     
    scanf("%[^\n]s", arquivo1);
    scanf("%*c%[^\n]s", arquivo2);

     
    fp1 = fopen(arquivo1,"r");
    if( fp1 == NULL )
    {
        printf("Aruivo não encontrado: \n");
        return -1;
    }
     
    fseek(fp1,0,SEEK_END);
     
    count    = ftell(fp1);
    scanf("%d", &posicao);       // number of bytes to copy
    scanf("%d", &qtdBytes); 
     
    fp2 = fopen(arquivo2,"w");
    if( fp2 == NULL )
    {
        printf("Arquivo não pode ser aberto\n");
        return -1;
    }
 
    fseek(fp1,posicao,SEEK_SET);
     
    fread(buffer,qtdBytes,1,fp1);
 
    fwrite(buffer,qtdBytes,1,fp2);
     
    buffer[qtdBytes]='\0';
     
    printf("Copiado : \"%s\"\n",buffer);
 
    fclose(fp1);
    fclose(fp2);
 
    return 0;
}