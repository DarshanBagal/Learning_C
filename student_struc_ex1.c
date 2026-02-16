#include<stdio.h>
struct student{
	int rollno;
	char name[50];
	float marks;
};
int main()
{
	int n;
	int i;
	printf("Enter numbers of student");
	scanf("%d",&n);
	
	struct student std[n];
	
	for(i=0;i<n;i++);
	{
		printf("Enter detail for student %d:\n",i+1);
		printf("Roll no :");
		scanf("%d",&std[i].rollno);
		printf("Name :");
		scanf("%s",std[i].name);
		printf("Marks :");
		scanf("%f",&std[i].marks);
	
	}
	printf("Student Record");
	for(i=0;i<n;i++)
	{
		printf("Roll No : %d  |  Name  : %s|  Marks =%.2f|",std[i].rollno,std[i].name,std[i].marks);
		
	}
	
	
	return 0;
}
