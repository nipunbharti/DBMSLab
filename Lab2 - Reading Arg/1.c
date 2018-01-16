#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getAll(char s[]);
void getNames(char s[]);
void getAge(char s[]);
void getRoll(char s[]);
void getCGPA(char s[]);
void getRollAndAge(char s[]);
void greater(char s[],char cgpa[]);

int main(int argc, char *argv[])
{
	if(argc < 4){
		printf("Wrong statement\n");
		return 0;
	}
	if(strcmp("Students.txt",argv[4])!=0){
		printf("File doesn't exist.\n");
		return 0;
	}
	if(strcmp("*",argv[2])==0){
		if(strcmp("CGPA",argv[6])==0){
			greater(argv[4],argv[8]);
			return 0;
		}
		getAll(argv[4]);
		return 0;
	}
	if(strcmp("name",argv[2])==0){
		getNames(argv[4]);
		return 0;
	}
	if(strcmp("age",argv[2])==0){
		getAge(argv[4]);
		return 0;
	}
	if(strcmp("roll",argv[2])==0){
		getRoll(argv[4]);
		return 0;
	}
	if(strcmp("cgpa",argv[2])==0){
		getCGPA(argv[4]);
		return 0;
	}
	if(strcmp("Roll, Age",argv[2])==0){
		getRollAndAge(argv[4]);
		return 0;
	}
	else{
		printf("Wrong statement syntax.\n");
		return 0;
	}
}

void getAll(char s[])
{
	char c;
	FILE *f;
	f = fopen(s,"r");
	fseek(f,0,SEEK_SET);
	while(!feof(f)){
		c = getc(f);
		printf("%c",c);
	}
	fclose(f);
}

void getNames(char s[])
{
	char c;
	FILE *f;
	f = fopen(s,"r");
	fseek(f,0,SEEK_SET);
	c = getc(f);
	while(!feof(f)){
		if(c!=32){
			printf("%c",c);
		}
		else{
			while(c!='\n'){
				c = getc(f);
			}
			printf("\n");
		}
		c = getc(f);
	}
	fclose(f);
}

void getAge(char s[])
{
	char c;
	int x,space = 0;
	FILE *f;
	f = fopen(s,"r");
	fseek(f,0,SEEK_SET);
	while(!feof(f)){
		while(space!=2){
			c = getc(f);
			if(c == 32){
				space++;
			}
		}
		fscanf(f,"%d",&x);
		printf("%d\n",x );
		while(c!='\n'){
			c = getc(f);
		}
		c = getc(f);
		space=0;
	}
	fclose(f);
}

void getRoll(char s[])
{
	char c,x[9];
	int space = 0;
	FILE *f;
	f = fopen(s,"r");
	fseek(f,0,SEEK_SET);
	while(!feof(f)){
		while(space!=1){
			c = getc(f);
			if(c == 32){
				space++;
			}
		}
		fscanf(f,"%s",x);
		printf("%s\n",x);
		while(c!='\n'){
			c = getc(f);
		}
		c = getc(f);
		space=0;
	}
	fclose(f);
}

void getCGPA(char s[])
{
	char c;
	float x;
	int space = 0;
	FILE *f;
	f = fopen(s,"r");
	fseek(f,0,SEEK_SET);
	while(!feof(f)){
		while(space!=8){
			c = getc(f);
			if(c == 32){
				space++;
			}
		}
		fscanf(f,"%f",&x);
		printf("%f\n",x);
		while(c!='\n'){
			c = getc(f);
		}
		c = getc(f);
		space=0;
	}
	fclose(f);
}

void getRollAndAge(char s[])
{
	char c,roll[9];
	int age;
	int space = 0;
	FILE *f;
	f = fopen(s,"r");
	fseek(f,0,SEEK_SET);
	while(!feof(f)){
		while(space!=1){
			c = getc(f);
			if(c == 32){
				space++;
			}
		}
		if(space==1){
			c = getc(f);
			while(space!=3){
				printf("%c",c);
				c=getc(f);
				if(c == 32){
					space++;
				}
			}
			printf("\n");
		}
		while(c!='\n'){
			c = getc(f);
		}
		c = getc(f);
		space=0;
	}
	fclose(f);
}

void greater(char s[],char cgpa[])
{
	float d = atof(cgpa);
	FILE *f;
	float x;
	f = fopen(s,"r");
	char c;
	int move=1,space=0,i=0,r=0;
	for(i=0;i<5;i++){
		while(space != 8*(i+1)){
			c = getc(f);
			if(c == 32){
				space++;
			}
			fseek(f,move,SEEK_SET);
			move++;
		}
		fscanf(f,"%f",&x);
		if(x>d){
			fseek(f,0,SEEK_SET);
			c = getc(f);
			if(i!=0){
				move=1;
				while(r<i){
					while(c!='\n'){
						fseek(f,move,SEEK_SET);
						c = getc(f);
						move++;
					}
					c = getc(f);
					r++;
				}	
			}
			while(c!=32){
				printf("%c",c);	
				c = getc(f);
			}
			printf("\n");
		}
		r=0,space=0,move=1;
	}
	fclose(f);
}