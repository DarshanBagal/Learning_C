#include<stdio.h>

int main(){
	int arr[5]={22,33,44,100,33};
	int even=0,odd=0;
	int i;
	for(i=0;i<5;i++){
		if(arr[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	printf("\nEven no count:%d",even);
	printf("\nodd no count:%d",odd);
	
}
