//Objective - Looping Statements
//Date - Sept 12, 2018
//Name - Vayu Dugar
//Reg. No - 18BCAN024

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,sum=0,f=1,sign=-1;
	for(i=1;i<=10;i++)
	{
		sign=(-1)*sign;
		sum=sum+sign*i;
	}
	printf("Sum of series %d",sum);
	getch();
}
