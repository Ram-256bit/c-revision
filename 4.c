#include<stdio.h>
int prime(int n)
{
	int i=2;
	for(i=2;i<(n/2);i++)
	{
		if((n%i)==0)
		{
			printf("Not a prime.");
			return 0;
		}
	}
	printf("Is a prime.");
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	prime(n);
}
