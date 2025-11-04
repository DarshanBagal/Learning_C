#include<stdio.h>

int main()
{
	FILE *fp;
	int numbers[5] ={10,20,30,40,50};
		fp = fopen("C:\\Filehandling\\hacker.bin","wb");
		if(fp==NULL)
	{
		printf("File dose not exisst or not opening");
		
		return 1;
		
	}
	fwrite(numbers,sizeof(int),5,fp);
		fclose(fp);
	printf("Binary Data written sucessfully");
	return 0;
	
}
