//ponter to pointer
#include<stdio.h>

int main()
{
	int a=10;// noraml varible
	int *p ; //pointer to int
	int **pp; //pointer to pointer
	
	
	p=&a;
	pp=&p;
	
	
	printf("\nvalue of a =%d",a); 
	printf("\n Addres of a =%u",&a);
	printf("\n  p stores = %u (addres of a)",p);
	printf("\n Value of *p= %d",*p);
	printf("\n Address of pp= %u  (addres of p)",pp);
	printf("\n Address of *pp= %u  (addres of a)",*pp);
	printf("\n Value of *pp= %d",**pp);
			
}
