#include<stdio.h>

int main()
{
    int n,i,j,teste = 100;
    char s;
    long double pascal[66][66];
    pascal[0][0] = 1;
    pascal[0][1] = 0;  
    i = 1;  

    while(testes--)
    {
        //VAMO TRIANG DE PASCAL
        scanf("%d %c",&n,&s);

        for(;i <= n;i++)
        {

            for(j = 0;j < i;j++)
            {
                if(j = 0 || j = i)
                    pascal[i][j] = 1;
                else{
                    pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
                }
            }
    }

        // Binomio
        for(;;)
        {

        }
    }

    return 0;
}