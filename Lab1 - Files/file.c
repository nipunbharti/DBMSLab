#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "insert.h"
#include "greater.h"
#include "check.h"
#include "tenPoint.h"

void check();
void tenPoint();

int main()
{
	int ch=0;
	while(1){
		printf("1.Enter and insert record\n2.Name of students whose CGPA is greater than 7.5\n3.Name of students whose name start with given starting characters\n4.Sem and Course 10 pointer\n5.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				greater();
				break;
			case 3:
				check();
				break;
			case 4:
				tenPoint();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}