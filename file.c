#include <stdio.h>

struct student{
	char name[10];
	char rollno[10];
	char gender;
	float g1,g2,g3,g4,gpa,cgpa;
};

void insert();

int main()
{
	int ch=0;
	while(1){
		printf("1.Enter and insert record\n2.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}

void insert()
{

}