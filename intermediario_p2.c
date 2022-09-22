#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void repetir(int vetor[], int n){
    int i, j, k=0, flag;

    printf("[");

    for (i=0; i<n; i++) {
        flag = 1;
        for (j=0; j<i; j++) {
            if (vetor[i] == vetor[j] && i!=j) {
                flag--;
                break;
            }
        }
        if (flag) {
            printf("%d,", vetor[i]);
        }
    }
    printf("\b]\n");
 }

int main() {
    int vetor[5]={1,2,5,9,2};

    repetir(vetor, 5);

	return 0;
}
