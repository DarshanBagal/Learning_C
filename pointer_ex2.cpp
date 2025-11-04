//ponter to pointer
#include<stdio.h>

int main()
{
	int a=10;// noraml varible
	int *p ; //pointer to int
	int **pp; //pointer to pointer
	
	
	p=&a;
	pp=&p;
	
	
	printf("value of a =%d",a); 
	printf("Addres of a =%u",&a);
}
