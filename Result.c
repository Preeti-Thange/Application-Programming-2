#include<stdio.h>

void CheckResult(int iMarks)
{
	if((iMarks<0)||(iMarks>100))     //input filter
	{
		printf("Invalid marks\n");
		return;
	}
	
	if((iMarks>=0)&&(iMarks<35))
	{
		printf("You are failed");
	}
	
	else if((iMarks>=35)&&(iMarks<50))
	{
		printf("Third class");
	}
	
	else if((iMarks>=50)&&(iMarks<60))
	{
		printf("Second class");
	}
	
	else if((iMarks>=60)&&(iMarks<70))
	{
		printf("first class");
	}
	
	else if((iMarks>=60)&&(iMarks<70))
	{
		printf("first class");
	}
	
	else if((iMarks>=70)&&(iMarks<100))
	{
		printf("Distinction");
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	CheckResult(iValue);
	return 0;
}


