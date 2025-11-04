#include<stdio.h>

int main()
{
	FILE *fp;
	char name[50];
	float marks;
	int age;
	
	fp = fopen("C:\\Filehandling\\studentdetail.txt","w");
	printf("Enter your name\n");
	scanf("%s",&name);
		printf("Enter your Age\n");
	scanf("%d",&age);
		printf("Enter your marks\n");
	scanf("%f",&marks);
	
	
		if(fp==NULL)
	{
		printf("File dose not exisst or not opening");
		
		return 1;
		
	}
	fprintf(fp,"name=%s",name);
	fprintf(fp,"name=%d",age);
	fprintf(fp,"name=%f",marks);
	
	
		fclose(fp);
	printf("Data written sucessfully");
	
	
	return 0;
}
