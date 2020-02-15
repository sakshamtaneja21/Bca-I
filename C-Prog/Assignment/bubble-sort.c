#include <stdio.h>
#include <conio.h>

void main() {
  int array[10], n=10, c, d, swap;
  printf("Enter 10 numbers ");
  for (c = 0; c < n; c++) {
   scanf("%d", &array[c]);
  }

  for (c = 0 ; c < n - 1; c++) {
      for (d = 0 ; d < n - c - 1; d++) {
         if (array[d] > array[d+1]) {
            swap = array[d];
            array[d] = array[d+1];
            array[d+1] = swap;
         }
      }
   }

  printf("Sorted list in ascending order :\n");
  for (c = 0; c < n; c++) {
     printf("%d\n", array[c]);
   }
   getch();
}