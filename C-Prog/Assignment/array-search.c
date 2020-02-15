#include <stdio.h>
#include <conio.h>

void main() {
   int a[5],ele,i;
   printf("Enter 5 values : ");
   for (i = 0; i < 5; i++) {
      scanf("%d", &a[i]);
   }

   //Read the element to be searched
   printf("Enter the elements to be searched : ");
   scanf("%d", &ele);

   //Search starts from the zeroth location
   i = 0;
   while (i < 5 && ele != a[i]) {
      i++;
   }

   //If i < num then Match found
   if (i < 5)
      printf("Number found at the location = %d", i + 1);
   else
      printf("Number not found");
   getch();
}