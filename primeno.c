#include<stdio.h>
int prime(int num, int a);
int main()
{
	int num, result;
	printf("Enter a number: \n");
	scanf("%d",&num);
	result = prime(num,num/2);
	if(num/2)
	{
		printf("Entered number is not prime",num);
	}
	else
	{
		printf("Entered number is prime",num);
	}
}
int prime(int num, int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		if(num%a==0)
		{
			return 0;
		}
		else
		{
			return prime(num,a-1);

		}
	}
}
