void greater()
{
	FILE *f;
	float x;
	f = fopen("4.txt","a+");
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
		if(x>7.5){
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