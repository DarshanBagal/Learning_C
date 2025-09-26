#include<stdio.h>
int main()
{
	int amount;
	printf("enter your shoping amount");
	scanf("\n%d",&amount);
	
	if(amount>=150)
	{
		printf("dilevery charges will applying");
		
	}
	else
	{
		printf("congrag your aligible for free dilevry");
	}
	
	return 0;
}
