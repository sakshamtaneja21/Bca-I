#include <stdio.h>
#include <conio.h>

void main()
{
	int customer,units;
	float cat1,cat2,cat3,cat4,cat5,totchg;
	printf("Enter your customer PIN ");
	scanf("%d",&customer);
	printf("Enter units consumed ");
	scanf("%d",&units);
	
	cat1=units*0.50;
	cat2=100+0.65*(units-200);
	cat3=230+0.80*(units-400);
	cat4=390+1.00*(units-600);
	
	if(units>0 && units<=200)
	totchg=cat1;
	else if(units>201 && units<=400)
	totchg=cat2;
	else if(units>401 && units<=600)
	totchg=cat3;
	else if(units>=601)
	totchg=cat4;
	else
	printf("Error");
	
	printf("The total charges for Customer No %d is %f",customer,totchg);
	getch();
	
}
