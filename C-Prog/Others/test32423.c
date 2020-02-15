#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n");
	
	int i,sum=0;
	for(i=5; i<=50; i+=5){
		sum=sum+i;
	}
	printf("%d\n",sum);
}
