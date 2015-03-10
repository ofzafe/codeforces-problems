//Next Round Codesforces
#include <stdio.h>

int main(){
	unsigned short int n, k, i, a[50];

	scanf("%hu %hu", &n,&k);
	k--;
	for(i = 0; i < n; i++) scanf("%hu", &a[i]);

	while(k > 0) if(a[k] == 0) k--; else break;
	
	if( i == 1 && a[0] > 0) i = 1;
	else if(a[k] == 0) i = 0;
	else for(i = 0 ; a[k] <= a[i] && i < n; i++); 

	printf("%i", i);
	return 0;
}
