#include<stdio.h>

int main()
{
	int n1 = 1,n2 = 1,n_seq,c = 2,novo = 1,aux;
	

	do
	{

		scanf("%d", &n_seq);

		while(c <= n_seq)
		{
			printf("%d\t", n2);
			aux = novo;
			novo = n1 + n2;
			n1 = n2;
			n2 = novo;
			c++;
		}



	}while (n_seq != -1);

	return 0;
	
}
