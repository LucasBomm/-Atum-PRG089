#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int lista[10], soma;
    int i, x, y;

    for (i=0; i<10; i++) {
        printf("Lista[%d]: ", i+1);
        scanf("%d", &lista[i]);
    }
    printf("\nX: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);

    soma = lista[x] + lista[y];

    printf("\n%d\n", soma);


	return 0;
}
