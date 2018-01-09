#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getAll(char s[]);
void getNames(char s[]);
void getAge(char s[]);
void getRoll(char s[]);
void getCGPA(char s[]);

int main(int argc, char *argv[])
{
	if(strcmp("*",argv[2])==0){
		getAll(argv[4]);
	}
	if(strcmp("name",argv[2])==0){
		getNames(argv[4]);
	}
	if(strcmp("age",argv[2])==0){
		getAge(argv[4]);
	}
	if(strcmp("roll",argv[2])==0){
		getRoll(argv[4]);
	}
	if(strcmp("cgpa",argv[2])==0){
		getCGPA(argv[4]);
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