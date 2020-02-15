#include <stdio.h>
#include <conio.h>

int reverse() {
   int n,rem,rvrno=0;
	printf("Enter a number with 3 or more digits ");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rvrno=rvrno*10+rem;
		n/=10;
	}
	return(rvrno);
}

void main() {
   int reverse(void);
   int rev;
   rev=reverse();
   printf("Reversed Number is %d",rev);
   getch();
}