#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("\n%d",&age);
	
	if(age<5)
	{
		printf("you are eligible for free ticket");
		
	}
	else if(age>5 && age<60)
	{
		printf("full ticket");
	}
	else if(age>60 && age<75)
	{
		printf("Free tecket");
	}
	else if(age>60 && age<75)
	{
		printf("haff tecket");
	}
	else{
		printf("free teacket");
	}
	
	return 0;
}
