#include<stdio.h>
struct studentS{
	int rollno;
	char name[50];
	float marks;
};
union studentU{
	int rollno;
	char name[35];
	float marks;
};

int main(){
	struct studentS s1;
	printf("Size of struct = %d\n",sizeof(s1));
	
		union studentU s2;
	printf("Size of struct = %d\n",sizeof(s2));
	
}


