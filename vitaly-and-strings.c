//Vitaly and Strings Codesforces

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 100

int main(){
	char s[N], t[N];

	scanf("%100s", s);
	
	scanf("%100s", t);
	
	unsigned short int n = strlen(s)-1;
	do{
		if(s[n] == 'z') n--;else{ s[n]++; break;}
	}while(n!=-1);

	if(strcmp(s,t) < 0) printf("%s", s ); else printf("No such string");
	return 0; 
}
