// Apointer is a variable that holds the address of the variable

#include<stdio.h>

int main()
{
	/*int x=10,y,z;
	printf("\n Address of x= %u",&x);
    printf("\n Address of y= %u",&y);
	printf("\n Address of z= %u",&z);
	printf("\n Address of x= %d",*(&x));*/
	
	int x= 15;
	int *pr;
	pr=&x;
	
		printf("\n Address of x= %u",&x);
			printf("\n Address of pr= %u",pr);
				printf("\n Value of x= %d",x);
			printf("\n Value of pr= %d",*pr);
			
			*pr=20;
			printf("\n Value of x= %d",x);
			
			return  0;
		

}
