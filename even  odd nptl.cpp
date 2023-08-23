#include<stdio.h>
int main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else if(n%2!=0)
	{
		printf("%d odd",n);
	}
	else
	printf("not found good bye");
}
