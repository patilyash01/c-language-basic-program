#include<stdio.h>
#include<conio.h>
void main ()
{       int a,b,c;
	clrscr();
	printf("\n Enter the number of a");
	scanf("%d",&a);
	printf("\n Enter the number of b");
	scanf("%d",&b);
	printf("\n Enter the numbre of c");
	scanf("%d",&c);
	if(a>b)
	{
		printf("\n a is big number");
	}
	else
	{
		if(b>c)
		{
			printf("\n b is big number");
		}
		else
		{
			printf("\n c is big number");
		}

	}



	getch();
}