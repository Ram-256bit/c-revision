#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	scanf("%d%d",p1,p2);
	printf("\nSum is: %d",(*p1+*p2));
	printf("\nAbsoulte diff is: %d",abs(*p1-*p2));
}
