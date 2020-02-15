#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n");
	float rad,area,circum;
	printf("Enter Radius");
	scanf("%f", &rad);
	area=3.14*rad*rad;
	circum=2*3.14*rad;
	printf("\nArea of Circle %f",area);
	printf("\nCircumference of Circle %f",circum);
	getch();
}
