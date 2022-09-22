#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(float *p1, float *p2) {
    float d;

    d = sqrt(pow((p2[0]-p1[0]), 2) + pow((p2[1]-p1[1]), 2));

    return(d);
}




int main() {
    float p1[2] = {1,2}, p2[2] = {5,6};

    printf("%f\n", distancia(p1, p2));

	return 0;
}
