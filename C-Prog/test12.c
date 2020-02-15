#include <stdio.h>
#include <conio.h>

void main ()
{
	printf("18BCAN024\n");
	int n1,n2,n3,n4,n5,sum,percnt;
	printf("Enter Marks of 5 subjects ");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	sum=n1+n2+n3+n4+n5;
	percnt=(sum/250)*100;
	printf("Percentage = %d\n",percnt);
	
	if(percnt>=75 && percnt<=100)
		printf("Grade - A+");
	else if(percnt>=60 && percnt<=74)
		printf("Grade - A");
	else if(percnt>=50 && percnt<=59)
		printf("Grade - B");
	else if(percnt>=35 && percnt<=49)
		printf("Grade - C");
	else if(percnt>=0 && percnt<=34)
		printf("Grade - F");
	else
		printf("Error");
	
	getch();
}
