#include <stdio.h>
#include <conio.h>

void main ()
{
	printf("18BCAN024\n");
	int x,y;
	printf("Enter a number ");
	scanf("%d",&x);
	printf("Enter another number ");
	scanf("%d",&y);
	if(x>y)
		printf("%d is Larger than %d",x,y);
	else
		printf("%d is Larger than %d",y,x);
	getch();
}
