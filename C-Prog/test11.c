#include <stdio.h>
#include <conio.h>

void main ()
{
	printf("18BCAN024\n");
	int n1,n2,n3;
	printf("Enter 3 Numbers ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if (n1<n2&&n1<n3)
		printf("N1 is the smallest");
	else if (n2<n3)
		printf("N2 is the smallest");
	else
		printf("N3 is the smallest");
	getch();
}
