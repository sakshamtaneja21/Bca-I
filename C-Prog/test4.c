#include <stdio.h>
#include <conio.h>

void main()
{
	printf ("18BCAN024\n");
	int side,area,peri;
	printf ("Enter side");
	scanf ("%d",&side);
	area=side*side;
	peri=4*side;
	printf("\nArea of square = %d \n", area);
	printf("Perimeter of square = %d \n", peri);
	getch();
}
