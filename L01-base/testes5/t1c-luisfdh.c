#include<stdio.h>

int main()
{
	int n1,n2, contador;

	while (contador != 1000)
	{
		scanf("%i %i",&n1,&n2);
		

		if ((n1 + n2) % 2 == 0)
		{
			printf("par\n");
		}
		else
		{
			printf("ímpar\n");
		}

		contador = contador + 1;
	
	}

	return 0;
}

