#include<stdio.h>

int main()
{
	FILE *fp;
	char str[200];
	
		fp = fopen("C:\\Filehandling\\write1.txt","r");
	if(fp==NULL)
	{
		printf("File dose not exisst or not opening");
		
		return 1;
		
	}
	printf("File content");
	while(fgets(str,sizeof(str),fp) != NULL){
		printf("%s",str);
		
	}
	fclose(fp);
	printf("Data written sucessfully");
	return 0;
}
