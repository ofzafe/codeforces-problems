//Watermelon Codeforces

#include <stdio.h>

int main(void) {
	unsigned short int w;
	
	scanf("%hu", &w);
	if(w%2==0 && w!=2) printf("YES"); else printf("NO");
	return 0;
}
