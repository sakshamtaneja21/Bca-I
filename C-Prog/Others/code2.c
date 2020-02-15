#include <stdio.h>
#include <conio.h>

void main()
{
	int x;
	printf("Enter a Number ");
	scanf("%d",&x);
	if(x>0)
	printf("%d is Positive",x);
	else if(x<0)
	printf("%d is Negative",x);
	else
	printf("%d is 0",x);
	getch();
}
