int str_len(char * c){
	int i=0;
	for(;*(c+i)!='\0';i++);
	return i;
}

char * str_rev(char * c){
	int i=0,j=str_len(c)-1;
	char t;
	for(;i<j;i++,j--){
		t=*(c+i);
		*(c+i)=*(c+j);
		*(c+j)=t;
	}
	return c;
}

char * str_cpy(char * c1, char * c2){
	int i=0;
	for(;i<=str_len(c2);i++)	*(c1+i)=*(c2+i);
	return c1;
}

char * str_cat(char * c1, char * c2){
	int i=str_len(c1),j=0;
	for(;*(c1+i)=*(c2+j);++i,++j);
	return c1;
}

int str_cmp(char * c1, char * c2){
	int i=0;
	for(;*(c1+i)==*(c2+i);++i)
		if(*(c1+i)=='\0')	return 0;
	return *(c1+i)-*(c2+i);
}
