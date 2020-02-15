//Objective - Arrays
//Name - Vayu Dugar
//Date - Oct. 24, 2018
//Reg. No - 18BCAN024

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int n[5],i,sum=0;
	float avg;
	printf("Enter 5 numbers ");
	for(i=0; i<5; i++){
		scanf("%d",&n[i]);
	}
	for(i=0; i<=5; i++){
		sum=sum+n[i];
	}
	avg=sum/5.0;
	printf("The sum is %d\n",sum);
	printf("The average is %f", avg);
	getch();
}