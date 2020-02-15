#include <stdio.h>
#include <conio.h>

int sum() {
   int n,t,rem,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		rem=t%10;
		sum=sum+rem;
		t=t/10;
	}
	return(sum);
}

void main() {
   int sum(void);
   int s;
   s=sum();
   printf("Sum of digits is %d",s);
   getch();
}