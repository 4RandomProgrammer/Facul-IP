#include<stdio.h>

int main()
{
	int n1,n2;
	
	scanf("%i %i",&n1,&n2);

	if ((n1 + n2) % 2 == 0)
	{
		printf("par\n");
	}
	else
	{
		printf("ímpar\n");
	}
	

	return 0;
}

