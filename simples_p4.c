#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int encontra_letra(char letra[],char frase[]) {
    int i, n=0;

    for(i=0; i<strlen(frase); i++) {
        if (frase[i]==letra[0]){
            n++;
        }
    }

    return (n);
}

int main() {

    printf("%d\n", encontra_letra("a", "uma frase generica de questões de programação"));

	return 0;
}
