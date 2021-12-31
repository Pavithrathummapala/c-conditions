#include<stdio.h>
void main()
{
	int marks;
	scanf("enter marks");
	printf("%d",&marks);
	if(marks>=35)
	{
		printf("passed in maths\n passed in english\n passed in computer science");
	}
	else 
	{
		printf("failed in maths\n failed in english\n failed in computer science");
	}
	
}
