#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024");
	float/*int*/ basepay,hra,da,grssal;
	printf("\nBasic pay of employee");
	scanf("%f",&basepay);
	hra=(basepay*50)/100;/*House Rent Allowance*/
	da=(basepay*10)/100;/*Dearness Allowance*/
	printf("\nHRA = %f",hra);
	printf("\nDA = %f",da);
	grssal=basepay+hra+da;
	printf("\nGross Salary of Employee = %f",grssal);
	getch();
}
