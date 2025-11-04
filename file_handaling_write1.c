#include<stdio.h>

int main()
{
	FILE *fp;
	
	fp = fopen("C:\\Filehandling\\write1.txt","w");
	if(fp==NULL)
	{
		printf("File dose not exisst or not opening");
		
		return 1;
		
	}
	fprintf(fp,"Hello this is jayesh\n");
	fprintf(fp,"Hello this is Zating\n");
	
	fclose(fp);
	printf("Data written sucessfully");
	return 0;
	
}
