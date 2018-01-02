#include <stdio.h>
#include <stdlib.h>

struct student{
	int g1,g2,g3,g4;
	float gpa,cgpa;
}s;
struct detail{
	char name[10];
	char rollno[10];
	char gender;
}d[5];

void insert();
void enterdata();
void greater();

int main()
{
	int ch=0;
	while(1){
		printf("1.Enter and insert record\n2.Name of students whose CGPA is greater than 7.5\n3.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				greater();
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
	int sem=0,n=0;
	if(sem==0){
		FILE *f;
		f = fopen("1.txt","w+");
		while(n<2){
			printf("Enter data for %d student:\n",n+1);
			printf("Enter name:\n");
			scanf("%s",d[n].name);
			printf("Enter the roll no:\n");
			scanf("%s",d[n].rollno);
			printf("Enter the gender: M or F:\n");
			scanf(" %c",&d[n].gender);
			printf("For first sem:\n");
			enterdata();
			s.gpa = (s.g1 + s.g2 + s.g3 +s.g4)/4.0;
			s.cgpa = s.gpa;
			fprintf(f,"%s %s %c %d %d %d %d %0.2f %0.2f\n",d[n].name,d[n].rollno,d[n].gender,s.g1,s.g2,s.g3,s.g4,s.gpa,s.cgpa);
			n++;
		}
		fclose(f);
		sem++;
	}
	n=0;
	if(sem==1){
		FILE *f;
		f = fopen("2.txt","w+");
		while(n<2){
			printf("For second sem:\n");
			printf("Enter data for %d student:\n",n+1);
			enterdata();
			s.gpa = (s.g1 + s.g2 + s.g3 +s.g4)/4.0;
			s.cgpa = (s.cgpa + s.gpa)/2.0;
			fprintf(f,"%s %s %c %d %d %d %d %0.2f %0.2f\n",d[n].name,d[n].rollno,d[n].gender,s.g1,s.g2,s.g3,s.g4,s.gpa,s.cgpa);
			n++;
		}
		fclose(f);
		sem++;
	}
	n=0;
	if(sem==2){
		FILE *f;
		f = fopen("3.txt","w+");
		while(n<2){
			printf("For third sem:\n");
			printf("Enter data for %d student:\n",n+1);
			enterdata();
			s.gpa = (s.g1 + s.g2 + s.g3 +s.g4)/4.0;
			s.cgpa = (s.cgpa + s.gpa)/2.0;
			fprintf(f,"%s %s %c %d %d %d %d %0.2f %0.2f\n",d[n].name,d[n].rollno,d[n].gender,s.g1,s.g2,s.g3,s.g4,s.gpa,s.cgpa);
			n++;
		}
		fclose(f);
		sem++;
	}
	n=0;
	if(sem==3){
		FILE *f;
		f = fopen("4.txt","w+");
		while(n<2){
			printf("For fourth sem:\n");
			printf("Enter data for %d student:\n",n+1);
			enterdata();
			s.gpa = (s.g1 + s.g2 + s.g3 +s.g4)/4.0;
			s.cgpa = (s.cgpa + s.gpa)/2.0;
			fprintf(f,"%s %s %c %d %d %d %d %0.2f %0.2f\n",d[n].name,d[n].rollno,d[n].gender,s.g1,s.g2,s.g3,s.g4,s.gpa,s.cgpa);
			n++;
		}
		fclose(f);
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

void greater()
{
	FILE *f;
	float x;
	f = fopen("4.txt","a+");
	char c;
	int move=1,space=0;
	while(space!=8){
		c = getc(f);
		if(c == 32){
			space++;
		}
		fseek(f,move,SEEK_SET);
		move++;
	}
	fscanf(f,"%f",&x);
	if(x>7.5){
		fseek(f,0,SEEK_SET);
		c = getc(f);
		while(c!=32){
			printf("%c",c);	
			c = getc(f);
		}
	}
	while(space!=16){
		c = getc(f);
		if(c == 32){
			space++;
		}
		fseek(f,move,SEEK_SET);
		move++;
	}
	fscanf(f,"%f",&x);
	move=1;
	if(x>7.5){
		fseek(f,0,SEEK_SET);
		c = getc(f);
		while(c!='\n'){
			fseek(f,move,SEEK_SET);
			c = getc(f);
			move++;
		}
		while(c!=32){
			printf("%c",c);	
			c = getc(f);
		}
	}
	fclose(f);
}