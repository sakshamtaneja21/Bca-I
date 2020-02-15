//Objective - Looping Statements
//Name - Vayu Dugar
//Date - Oct. 17, 2018
//Reg. No - 18BCAN024

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,k;
	for(i=1; i<=5; i++){
		for(j=4; j>=i; j--){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
		}
	printf("\n");
	}
	getch();
}
