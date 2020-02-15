/* Array
		array is a collection of similar data items(elements),
		stored at contiguous memory locations.
	syntax :-
		data-type array name[size of array]
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int m[50];
	int i;
	printf("Enter marks of 50 students ");
	for(i=0; i<=49; i++){
		scanf("%d",&m[i]);
	}
	getch();
}
