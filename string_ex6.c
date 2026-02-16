#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	
	printf("Enter String");
	fgets(str,sizeof(str),stdin);
	displaystring(str);
	
	
}
void displaystring(char str[]){
	printf("enter string =%s",str);
	puts(str);
}
