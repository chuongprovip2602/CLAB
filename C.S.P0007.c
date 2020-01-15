#include<stdio.h> 
#include<String.h>
#include<conio.h>
#include<ctype.h>

void input(char s[]){
	printf("\n Please enter string: ");
	gets(s);
}

char * ltrim(char s[]) {
	int i=0;
	while(s[i]==' ') i++;
	if(i>0) strcpy(&s[0],&s[i]);
	return s;
}

char * rtrim(char s[]) {
	int i=strlen(s)-1;
	while(s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}

char* trim(char s[]) {
	rtrim(ltrim(s));
	char *ptr=strstr(s, "  ");
	while(ptr!=NULL) {
		strcpy(ptr,ptr+1);
		ptr=strstr(s, "  ");
	}
	return s;
}

int main() {char s[50]; 
	int key;
	int c;
	do{
	input(s);
	trim(s);
	printf("\n The string after removing: ");
	puts(s);
	c = getch();
	}while(c!=27);
}
