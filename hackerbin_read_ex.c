#include<stdio.h>

int main()
{
	FILE *fp;
	int numbers[5];
	int i;
		fp = fopen("C:\\Filehandling\\hacker.bin","rb");
		if(fp==NULL)
	{
		printf("File dose not exisst or not opening");
		
		return 1;
		
	}
	fread(numbers,sizeof(int),5,fp);
		fclose(fp);
	printf("Binary Data\n");
	for(i=0;i<5;i++){
		printf("%d\n",numbers[i]);
	}
	return 0;
	
}
