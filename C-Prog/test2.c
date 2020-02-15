#include <stdio.h>
#include <conio.h>

void main()
{
	printf ("18BCAN024\n");
	int x,y,sum,sub,pro,div;
	printf ("Enter First Number");
	scanf ("%d",&x);
	printf ("Enter Second Number");
	scanf ("%d",&y);
	sum=x+y;
	sub=x-y;
	pro=x*y;
	div=x/y;
	printf ("\n");
	printf("x+y = %d \n",sum);
	printf("x-y = %d \n",sub);
	printf("x*y = %d \n",pro);
	printf("x/y = %d \n",div);
	getch();
}
