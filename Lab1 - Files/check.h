void check()
{
	FILE *f;
	f = fopen("4.txt","a+");
	int i,move=0,r=0;
	char c;
	char s[3],s1[3];
	printf("Enter the starting characters:");
	scanf("%s",s1);
	fseek(f,0,SEEK_SET);
	for(i=0;i<5;i++){
		if(i==0){
			fgets(s,3,f);
			if(strcmp(s,s1)==0){
				fseek(f,move,SEEK_SET);
				c=getc(f);
				while(c!=32){
					printf("%c",c);
					c=getc(f);
				}
				printf("\n");
			}
			continue;
		}
		move=0;
		fseek(f,move,SEEK_SET);
		c=getc(f);
		while(r<i){
			c=getc(f);
			while(c!='\n'){
				c=getc(f);
				move++;
				fseek(f,move,SEEK_SET);
			}
			r++;
		}
		r=0;
		fgets(s,3,f);
		move=0;
		fseek(f,move,SEEK_SET);
		c=getc(f);
		if(strcmp(s,s1)==0){
			while(r<i){
				c=getc(f);
				while(c!='\n'){
					c=getc(f);
					move++;
					fseek(f,move,SEEK_SET);
				}
				r++;
			}
			while(c!=32){
				printf("%c",c);
				c=getc(f);
			}
			printf("\n");
			break;
		}
		r=0;
	}
	fclose(f);
}