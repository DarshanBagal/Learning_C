#include<stdio.h>

int main()
{
	int x,y;
	printf("enter X value");
	scanf("%d",&x);
	printf("enter y value");
	scanf("%d",&y);
	
	
	printf("\nlogical oparstion result");
	printf("\nAND result:%d\n",(x<5&&y>5));
	
		printf("\nOR result:%d",(x<5||y>5));
			printf("\nNOT result:%d",!(x<y));
	
	
	
	
	return 0;
}
