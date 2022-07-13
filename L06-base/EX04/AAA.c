#include<stdio.h>

int main()
{
    int reca[2000],i,j,k;
    reca[0] = 0;

    scanf("%d",&i);

    for(j = 1;j<=i;j++)
    {
        reca[j] = reca[j - 1] - j;

        for(k = 0;k<=j;k++)
            if(reca[j] < 0 || reca[j] == reca[j]) 
            {
                reca[j] = reca[j-1] + j;
            }

    }

    for(k=0;k<=i;k++)
        printf("%d ",reca[k]);

    return 0;
}