#include <stdio.h>
#include <string.h>
#define N 100

char s[N];

int main(){
    char t[N];

    scanf("%s", s);
    scanf("%s", t);
    
    unsigned short int n = strlen(s)-1;
    
    do{
        if(s[n] == 'z'){
         s[n] = 'a';
         n--;
        }else{ s[n]++; break;}
    }while(n>-1);
    
    if(strcmp(s,t) < 0) printf("%s", s ); else printf("No such string");
    return 0; 
}