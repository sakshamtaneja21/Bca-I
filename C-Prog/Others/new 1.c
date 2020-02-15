//Objective - Looping Statements
//Date - Sept 12, 2018
//Name - Vayu Dugar		Reg. No - 18BCAN024
#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int x;
	
	for(x=1;x<=20;x++){
		printf("Vayu Dugar\n");
	}
								or
	while(x<=20){
		printf("Vayu Dugar\n");
		x++;
	}
								or
	do {
		printf("Vayu Dugar\n");
		x++;
	}while(x<=20);
	
	getch();
}