#include<stdio.h>
int main()
{
	int temp;
	
	printf("enter the temprature");
	scanf("\n%d",&temp);
	
	if(temp>=45)
	{
		printf("very hot");
		
	}
	else if(temp>=10&&temp<20)
	{
		printf("cold ");
		
	}
	else if (temp>=20 && temp<27)
	{
		printf("modarate");
		
	}
	else{
		printf("simple");
	}
	
	
	
	
return 0;
}
