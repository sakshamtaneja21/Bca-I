//Objective - Vowel or Consonant
// Name - Vayu Dugar
//Roll No - 18BCAN024
//Date - Sept 05, 2018
#include <stdio.h>
#include <conio.h>

void main()
{
	printf("18BCAN024\n");
	char ch;
	printf("Enter an alphabet ");
	scanf("%c",&ch);
	switch (ch) {
		case 'a': printf("Vowel"); break;
		case 'e': printf("Vowel"); break;
		case 'i': printf("Vowel"); break;
		case 'o': printf("Vowel");	break;
		case 'u': printf("Vowel");	break;
		default: printf("Consonant"); break;
	}
	getch();
}
