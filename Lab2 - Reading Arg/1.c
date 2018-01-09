#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getAll(char s[]);
void getNames(char s[]);

int main(int argc, char *argv[])
{
	if(strcmp("*",argv[2])==0){
		getAll(argv[4]);
	}
	if(strcmp("name",argv[2])==0){
		getNames(argv[4]);
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
	int move=0;
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