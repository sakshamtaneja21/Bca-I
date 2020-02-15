#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j;
	for(i=2;i<200;i++)
	{
		for(j=2;j<=(i/j);j++)
		if(!(i%j)) break; // if factor found, not prime
		if(j > (i/j))
			printf("%d is prime\n", i);
	}
getch();
return 0;
}
