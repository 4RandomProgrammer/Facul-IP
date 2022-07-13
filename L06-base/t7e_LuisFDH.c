#include<stdio.h>

int main()
{
    unsigned long long int n,i,j,pascal[66][66],flag = 100;
    char s;

    pascal[0][0] = 1;
    pascal[0][1] = 0;

    for(i = 1;i <66 ;i++)
    {
        for(j = 0;j <= i;j++)
        {
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

while(flag--)
{

    scanf("%llu %c",&n,&s);

    for(i = 0; i <= n;i++)
    {
        if(s == '-')
        {
            if(i % 2 && i != 0){
                printf(" - ");
            }
            else if(i % 2 == 0 && i != 0){
                printf(" + ");
            }
        }
        else if(s == '+'){
            if(i != 0){
                printf(" + ");
            }
        }


        if(i == 0){
            printf("a^%llu",n);
        }
        else if (i == n){
            printf("b^%llu",n);
        }
         else{
            printf("%llu*a^%llu*b^%llu",pascal[n][i],n - i,i);
        }
    }

    printf("\n");
}

    return 0;
}