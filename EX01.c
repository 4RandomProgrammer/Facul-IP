#include<stdio.h>
#include<math.h>

int main()
{
	int num1,num2,op;

	scanf("%d %d", &num1, &num2);

	do
	{	
		scanf("%d",&op);


		switch(op)
		{
			case(1):
				printf("%d\n", num1 + num2);
				break;
			case(2):
				printf("%d\n", num1 - num2);
				break;
			case(3):
				printf("%d\n", num2 - num1);
				break;
			case(4):
				printf("%d\n",num1 * num2);
				break;
			case(5):
				if(num2 == 0)
				{
					printf("divisão por 0");
					break;
				}
				else{
				printf("%f\n", (float) num1 / num2);
				break;
				}
			case(6):
				if(num1 == 0)
				{
					printf("divisão por 0");
					break;
				}
				else{
				printf("%f\n", (float) num2 / num1);
				break;
				}
			case(7):
				if(num2 == 0)
				{
					printf("divisão por 0");
					break;
				}
				else{
				printf("%d\n", num1 / num2);
				break;
				}
			case(8):
				if(num1 == 0)
				{
					printf("divisão por 0");
					break;
				}
				else{
				printf("%d\n", num2 / num1);
				break;
				}
			case(9):
				if(num2 == 0)
				{
					printf("divisão por 0");
					break;
				}
				else{
				printf("%d\n", num1 % num2);
				break;
				}
			case(10):
				if(num1 == 0)
				{
					printf("divisão por 0");
					break;
				}
				else{
				printf("%d\n", num2 % num1);
				break;
				}
			case(11):
				if (num2 == 0)
				{
				printf("1");
				}
				printf("%.0lf\n",pow(num1,num2));
				break;
			case(12):
				if (num1 == 0)
				printf("1");
				printf("%.0lf\n",pow(num2,num1));
				break;
			default:
				if(op != 0)
				printf("op invalida\n");
				break;

		}
	}while ( op != 0);

	return 0;
}
