//Objective - Arrays
//Name - Vayu Dugar
//Date - Oct. 24, 2018
//Reg. No - 18BCAN024

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int n[10],i,min;
	printf("Enter 10 numbers ");
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
	}
	min=n[0];
	for(i=0; i<=10; i++){
		if(min>n[i]){
			min=n[i];
		}
	}
	printf("Smallest number is %d",min);
	getch();
}
