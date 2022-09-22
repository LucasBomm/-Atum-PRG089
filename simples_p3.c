#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void encontra_primo(int *v, int n) {
    int i, j, resultado;

    printf("[");

    for(i=0; i<n; i++){
        resultado = 0;
        for(j=2; j<=v[i]/2; j++) {
            if (v[i]%j == 0) {
                resultado++;
                break;
            }
        }
        if (!resultado && v[i]!=1) {
            printf("%d,", v[i]);
        }
    }

    printf("\b]\n");
}

int main() {
    int v[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    encontra_primo(v, 20);

	return 0;
}
