#include<stdio.h>

int main()
{
	int n1,n2,n3,c;
	c=0;
	while (c != 1001)
	{


		scanf("%d%d%d", &n1,&n2,&n3);
		
		printf("resto %d\n",(n1 + n2 + n3)%3);
		
		c++;
	}


	return 0;
}
