#include <stdio.h>
#include <conio.h>

void main()
{
	printf ("18BCAN024\n");
	int len,bre,area,peri;
	printf ("Enter Length");
	scanf ("%d",&len);
	printf ("Enter Breadth");
	scanf ("%d",&bre);
	peri=2*(len+bre);
	area=len*bre;
	printf("\nArea of rectangle = %d \n", area);
	printf("Perimeter of rectangle = %d \n", peri);
	getch();
}
