#include<stdio.h>
struct employee{
int id;
char name[20];
char designation[20];
int salary;
};

int main(){
	struct employee emp;
	printf("\nEnter your id");
	scanf("%d",&emp.id);
	printf("\nenter your employee name");
	scanf("%s",emp.name);
	printf("\nEnter your designetion ");
	scanf("%s",emp.designation);
	printf("\nEnter your salary");
	scanf("%d",&emp.salary);
	
	printf("\n id=%d",emp.id);
		printf("\nNamae=%s",emp.name);
			printf("\n Designation=%s",emp.designation);
				printf("\nSalary=%d",emp.salary);
}
