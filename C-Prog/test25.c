//Objective - Looping Statements using break
//Date - Sept 26, 2018
//Name - Vayu Dugar
//Reg. No - 18BCAN024

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int i;
	for(i=1; i<=10; i++){
		if(i==6){
			printf("Loop End");
			break;
		}
		printf("%d\n",i);
	}
	getch();
}