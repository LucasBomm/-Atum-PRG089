#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float converte_temperatura(float n) {
    float c;

    c = (n - 32) / 1.8;

    return(c);
}



int main() {

    printf("%f\n", converte_temperatura(77.2));

	return 0;
}
