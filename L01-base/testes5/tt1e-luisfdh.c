#include<stdio.h>

int main ()
{
	int n1,n2,n3, cont;

	while (cont != 1000)
	{
		scanf("%d %d %d", &n1,&n2,&n3);
		

		if ((n1 + n2 + n3) % 3 == 0)
		{
			printf("resto 0\n");
		}
		else
		{
			if ((n1 + n2 + n3) % 3 == 1)
			{
				printf("resto 1\n");
				
			}
			else
			{
				printf("resto 2\n");
			}
		}
		cont = cont + 1;
	}

return 0;
}
