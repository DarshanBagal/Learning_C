#include<stdio.h>
int main()
{
	int battery = 100;
	
	while(battery>0){
		printf("\nbattetry : %d",battery);
		battery-=10;
	}
	printf("\nBattery Empty");
	
	
	return 0;
}
