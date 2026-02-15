#include<stdio.h>

int main()
{
	int num1,num2;
	char op;
	
	printf("enter the first no");
	scanf("\n%d",&num1);
	
	printf("enter the second no");
	scanf("\n%d",&num2);
	
	printf("which operation you perform (+,-,*,/)");
	scanf("\n%c",&op);
	
	switch(op){
		case'+':printf("sum of the no:%d",num1+num2);
		break;
			case'-': printf("subtraction of the no:%d",num1-num2);
		break;
			case'*': printf("multiplacation of the no:%d",num1*num2);
		break;
			case'/': printf("dividation of the no:%d",num1/num2);
		break;
		default
		
	}
	
}
