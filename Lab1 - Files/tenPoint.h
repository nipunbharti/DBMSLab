void tenPoint()
{
	int ch;
	char course[7];
	printf("Enter the semester:");
	scanf("%d",&ch);
	if(ch==1){
		FILE *f;
		f = fopen("1.txt","a+");
		printf("Enter the course:");
		scanf("%s",course);
		if(strcmp(course,"COM201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 3)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAN201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 4)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAT201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 5)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"ELE201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 6)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		fclose(f);
	}
	if(ch==2){
		FILE *f;
		f = fopen("2.txt","a+");
		printf("Enter the course:");
		scanf("%s",course);
		if(strcmp(course,"COM201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 3)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAN201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 4)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAT201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 5)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"ELE201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 6)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		fclose(f);
	}
	if(ch==3){
		FILE *f;
		f = fopen("3.txt","a+");
		printf("Enter the course:");
		scanf("%s",course);
		if(strcmp(course,"COM201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 3)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAN201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 4)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAT201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 5)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"ELE201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 6)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		fclose(f);
	}
	if(ch==4){
		FILE *f;
		f = fopen("4.txt","a+");
		printf("Enter the course:");
		scanf("%s",course);
		if(strcmp(course,"COM201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 3)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAN201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 4)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"MAT201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 5)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		if(strcmp(course,"ELE201T")==0){
			char c;
			int move=1,space=0,i=0,r=0,x;
			for(i=0;i<5;i++){
				while(space != (8*i + 6)){
					c = getc(f);
					if(c == 32){
						space++;
					}
					fseek(f,move,SEEK_SET);
					move++;
				}
				fscanf(f,"%d",&x);
				if(x==10){
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
				fseek(f,move,SEEK_SET);
			}
		}
		fclose(f);
	}
}