
#include<stdio.h>
#include<conio.h>
void main ()
{
	float price=0,qty=0,discount=0,bill=0;
	clrscr();
	printf("\n Enter the ice-crem price");
	scanf("%f",&price);
	printf("\n Enter the qty");
	scanf("%f",&qty);
	bill=qty*price;
	printf("\ntotal bill=%f",bill);
	if(bill>=200)
	{
		discount=bill*0.10;
		printf("\n discount=%f",discount);
		printf("\ndiscount=10",discount);
	}
	else
	{
		printf("\n Not of discount=%f");
	}

	getch();
}

