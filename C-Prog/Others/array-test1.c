//Objective - input 5 numbers and display the same
//Name - Vayu Dugar
//Lecture - Oct. 30, 2018
//Reg. No - 18BCAN024

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int i,sum,avg,n[5];
	printf("Enter 5 numbers ");
	for(i=0; i<5; i++){
		scanf("%d",&n[i]);
	}
	
	printf("Elements of Array are\n");
	for(i=0; i<5; i++){
		printf("%d\t",n[i]);
	}
	
	for(i=0; i<5; i++){
		sum=sum+n[i];
	}
	printf("\nSum of Elements is\n",sum);
	avg=sum/5.0;
	printf("Average of Array Elements is ",avg);
	getch();
}
