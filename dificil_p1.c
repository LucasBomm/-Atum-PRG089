#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int diamantes(char mina[]) {
    int i, esquerda=0, direita=0;

    for (i=0; i<strlen(mina); i++) {
        if (mina[i] == '<') {
            esquerda++;
        }
        if (mina[i] == '>') {
            direita++;
        }
    }

    if (esquerda>direita) {
        return (direita);
    }
    else {
        return (esquerda);
    }
}


int main() {
    int n, i;
    char mina[50];
    printf("Quantidade de casos:");
    scanf("%d", &n);

    int respostas[n];

    for (i=0; i<n; i++) {
        printf("Mineracao: ");
        scanf("%s", mina);

        respostas[i] = diamantes(mina);
    }

    for (i=0; i<n; i++) {
        printf("%d\n", respostas[i]);
    }

	return 0;
}
