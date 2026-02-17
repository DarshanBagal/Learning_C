#include<stdio.h>

 void main()
 {
 	char name1[50] ="darshan ";
 	char name2[50] ="bagal ";
 	char str[50] = "nimagul";
 	
 	strcat(name1,name2);
 	strcat(name1,str);
 	
 	printf("Concatenated String =%s",name1);
 }
