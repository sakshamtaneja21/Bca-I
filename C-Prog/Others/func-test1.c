#include <stdio.h>
#include <conio.h>

void facto() //function declaration
{
	int n,i,f=1; //function calling
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2; i<=n; i++){
		f=f*i;
	}
	printf("Factorial is %d",f);
}

void main(){
	facto(); //function calling
	getch();
}

				OR

#include <stdio.h>
#include <conio.h>

void main(){
	void facto(void); //function declaration (prototype)
	facto(); //function calling
	getch();
}

void facto() //function definition
{
	int n,i,f=1;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2; i<=n; i++){
		f=f*i;
	}
	printf("Factorial is %d",f);
}
