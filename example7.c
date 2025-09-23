#include<stdio.h>

int main()
{
	int num1,num2,z;
	printf("enter num1 value");
	scanf("%d",&num1);
	printf("enter y value");
	scanf("%d",&num2);
		printf("enter z value");
	scanf("%d",&z);
	
	
	printf("\nlogical oparstion result");
	printf("\nAND result:%d",(num1<5&&num2>5));
		printf("\nOR result:%d",(num1<5||num2>5));
printf("\nNOT result:%d",!(num1<num2));
	
	printf("\n3rd value result:%d ",(num1<z>num2));
	
	
	return 0;
}
