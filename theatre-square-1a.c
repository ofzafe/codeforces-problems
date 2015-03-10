//Theatre Square Codesforces

#include <stdio.h>
#include <math.h>

int main(){
    
    unsigned int n, m, a;

    scanf("%i %i %i", &n, &m, &a);
    printf("%0.lf" , ceil(m/(double) a) * ceil(n/(double) a));

    return 0;
}
