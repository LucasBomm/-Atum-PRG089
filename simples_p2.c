#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int perfeito(int n) {
    int i, soma=0;

    for(i=1; i<=n/2; i++) {
        if(n%i == 0) {
            soma += i;
        }
    }

    return(soma==n);
}


int main() {

    printf("%d\n", perfeito(5));

	return 0;
}
