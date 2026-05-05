#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf(" enter any no : ");
	scanf("%d",&n);
	{
		for(i=1;i<=n;i++)
		fact = fact * i;
	}
	printf("the fact no of %d",fact);
	return 0;
}