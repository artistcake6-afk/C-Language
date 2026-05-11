#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,ans;
	clrscr();
	printf("enter  any no 1 : ");
	scanf("%d",no1);
	printf("enter any no 2 : ");
	scanf("%d",no2);
	printf("\n 1- addition \n");
	printf("\n 2- subtriction \n");
	printf("\n 3- multiplication \n");
	printf("\n 4- division \n");
	printf("\n choose any no :  ");
	scanf("%d",&ans);
	if(ans==1)
	{
		ans=no1 + no2;
		printf("  %d + %d = %d",no1,no2,ans);
	}
	if(ans==2)
	{
		ans=no1 - no2;
		printf(" %d - %d = %d",no1,no2,ans);
	}
	if(ans==3)
	{
		ans=no1 * no2;
		printf(" %d * %d = %d",no1,no2,ans);
	}
	if(ans==4)
	{
		ans=no1 / no2;
		printf(" %d / %d = %d",no1,no2,ans);
	}
	getch();
}
