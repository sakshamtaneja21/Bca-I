#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024");
	float amt,tm,rate,si;
	printf("\nEnter Amount");
	scanf("%f",&amt);
	printf("Enter Time Period");
	scanf("%f",&tm);
	printf("Enter Rate of Interest");
	scanf("%f",&rate);
	si=(amt*tm*rate)/100;
	printf("\nSimple Interest = %f",si);
	getch();
}
