#include <stdio.h>

int main()
{
    int v_i[300],n,cont,testes,posv,i,j,aux,min;

    for(testes = 0; teste < 100;testes++)
    {
        scanf("%d",n);
        for(i = 0;i < n ;i++)
        {
            scanf("%d",posv);
            v_i[i] = posv;
        }
        for(i = 0;i <= n - 1;i++)
        {
            //Achar minimo
            min = i;

            for(j = i;j <= n - 1;j++)
            {
                if(v_i[min] > v_i[j] )
                {
                    min = j;
                }
            }

            aux = i;
            i = min;
            min = aux;
        }
        for(i = 0;i < n;i++)
        {
        printf("%d ",v_i[n])
        }

        printf("\n");

    }

    return 0;
}