#include <stdio.h>
#include <conio.h>

void main ()
{
	printf("18BCAN024\n");
	int x;
	printf("Enter a Number ");
	scanf("%d",&x);
	if(x%2==0)
	printf("The number is even");
	else
	printf("The number is odd");
	getch();
}