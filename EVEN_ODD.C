#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf(" emter any number : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even number\n",n);
	}
	else
	{
		printf("%d is odd number\n",n);
	}
	getch();
}