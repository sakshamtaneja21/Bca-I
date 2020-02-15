//Objective - Loops - Digit Reversal
//Date - Oct. 31, 2018

#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n\n");
	int n,rem,rvrno=0;
	printf("Enter a number with 3 or more digits ");
	scanf("%d",&n);

	while(n!=0){
		rem=n%10;
		rvrno=rvrno*10+rem;
		n/=10;
	}

	printf("Reversed Number is %d",rvrno);
	getch();
}

/*
   int n,reverse=0;
   printf("Enter a number with 3 or more digits ");
	scanf("%d",&n);

	while(n!=0){
		reverse=reverse*10;
		reverse=reverse+n%10;
		n/=10;
	}

	printf("Reversed Number is %d",reverse);
*/