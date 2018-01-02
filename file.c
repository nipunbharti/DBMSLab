#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	char rollno[10];
	char gender;
	int g1,g2,g3,g4;
	float gpa,cgpa;
}s;

void insert();
void enterdata();

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
	int sem = 0;
	float x;
	if(sem==0){
		FILE *f;
		int n=0;
		f = fopen("1.txt","w+");
		while(n<5){
			printf("Enter data for %d student:\n",n+1);
			printf("Enter name:\n");
			scanf("%s",s.name);
			printf("Enter the roll no:\n");
			scanf("%s",s.rollno);
			printf("Enter the gender: M or F:\n");
			scanf(" %c",&s.gender);
			enterdata();
			s.gpa = (s.g1 + s.g2 + s.g3 +s.g4)/4;
			s.cgpa = (s.g1 + s.g2 + s.g3 +s.g4)/4;
			x = s.cgpa;
			fprintf(f,"%s %s %c %d %d %d %d %0.2f %0.2f\n",s.name,s.rollno,s.gender,s.g1,s.g2,s.g3,s.g4,s.gpa,s.cgpa);
			n++;
		}
		fclose(f);
		sem++;
	}
}

void enterdata()
{
	printf("Enter the grades for COM201T\n");
	scanf("%d",&s.g1);
	printf("Enter the grades for MAN201T\n");
	scanf("%d",&s.g2);
	printf("Enter the grades for ELE201T\n");
	scanf("%d",&s.g3);
	printf("Enter the grades for MAT201T\n");
	scanf("%d",&s.g4);
}