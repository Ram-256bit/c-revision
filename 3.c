#include<stdio.h>
int main()
{
	char o;
	float a,b;
	printf("Enter the two numbers: \n");
	scanf("%f %f",&a,&b);
	printf("Enter the operator\n");
	scanf("\n%c",&o);
	printf("Answer is: ");
	switch(o)
	{
		case '+': printf("%.2f",(a+b));break;
		case '-': printf("%.2f",(a-b));break;
		case '*': printf("%.2f",(a*b));break;
		case '/': printf("%.2f",(a/b));break;
		default: printf("Enter a valid operator");
	}
}
