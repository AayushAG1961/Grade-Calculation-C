#include<stdio.h>

void main()
{
	int marks;
	
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks>=85)
		printf("Grade A");
	else if(marks>=70)
		printf("Grade B");
	else if(marks>=55)
		printf("Grade C");
	else if(marks>=40)
		printf("Grade D");
	else if(marks<40)
		printf("Grade F");
	else
		printf("Error: Marks not entered properly.");
}
