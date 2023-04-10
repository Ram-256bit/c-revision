#include<stdio.h>
int main()
{
	int a,b;
	int* p1;
	int* p2;
	scanf("%d%d",&a,&b);
	int* temp;
	p1=&a;
	p2=&b;
	
	temp=p1;
	p1=p2;
	p2=temp;
	printf("\n%d %d",*p1,*p2);
}
