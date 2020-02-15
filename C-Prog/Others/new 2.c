//Objective - Looping Statements
//Date - Sept 12, 2018
//Name - Vayu Dugar 	Reg. No - 18BCAN024
#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int a;
	
	for(a=1;a<=20;a++){
		printf("%d\t",a);
	}
	
	or
	
	while(a<=20){
		printf("%d\t",a);
		a++;
	}
	
	or
	
	do{
		printf("%d\t",a);
		a++;
	}while(a<=20);
	
	getch();
}