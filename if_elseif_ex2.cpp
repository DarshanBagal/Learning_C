#include<stdio.h>
int main{
	int temp;
	
	printf("enter the temprature");
	scanf("\n%d",&temp);
	
	if(temp<=45)
	{
		printf("very hot");
		
	}
	else if(temp>=27&&temp<=20)
	{
		printf("modarate ");
		
	}
	else if (temp<=0)
	{
		printf("very cold");
		
	}
	
	
	
return 0;
}
