//Objective - Day of the Week Date - Sept 05, 2018
//Name - Vayu Dugar Roll No - 18BCAN024
#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n");
	int x;
	printf("Enter weekday number ");
	scanf("%d",&x);
	switch(x) {
		case 1: printf("Monday"); break;
		case 2: printf("Tuesday"); break;
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
		case 7: printf("Sunday"); break;
		default: printf("Enter numbers between 1 & 7"); break;
	}
	getch();
}
