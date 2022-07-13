#include<stdio.h>

int main()
{
	int n1, n2,r,c;

	c = 0;

	while (c !=1001)	
        {
		scanf("%d%d", &n1, &n2);

		r = (n1+n2)%2;

		if (r == 1)
		{
			printf("é ímpar\n");
		}
		else
		{
			printf("é par\n");
		}
		c = c + 1;
	}
	
	return 0;

}
