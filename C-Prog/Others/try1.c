#include <stdio.h>
#include <conio.h>

void main()
{
   int i, n;
   printf("Enter a number ");
   scanf("%d", &n);
   for(i = 1; i<=n; i++){
      printf("%d\t",i*i);
   }

   int x;
   for(x=1; x>=10; x++){
      printf("\n%d",x);
   }
   printf("\nNo output\n");

   int a;
   for(a=10; a>=1; a--){
      printf("%d\t", a);
   }
   getch();
}