#include<stdio.h>

int main()
{
	int day;
	
	printf("enter the day no. (1 to 7)");
	scanf("\n %d",&day);
	
	switch(day){
		case 1: printf("monday");
		break;
			case 2: printf("tuesday");
		break;
			case 3: printf("wednesday");
		break;
			case 4: printf("tharsday");
		break;
			case 5: printf("friday");
		break;
			case 6: printf("saturday");
		break;
			case 7: printf("sunday");
		break;
		
		default:printf("invallid enty");
				}
		return 0;
	
}
