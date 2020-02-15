#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n,sum=0,sign=1;
	printf("Enter a number ");
	scanf("%d", &n);
	for(i=2; i<=n; i+=2){
      sign=(-1)*sign;
      sum=sum+sign*i*i*i;
	}
	printf("Sum of Series is %d",sum);
	getch();
}