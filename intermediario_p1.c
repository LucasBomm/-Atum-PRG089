#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float angulo(int *A, int *B, int *C) {
    int V1[2], V2[2];
    float ang, V1mod, V2mod;

    V1[0] = A[0] - B[0];
    V1[1] = A[1] - B[1];

    V2[0] = C[0] - B[0];
    V2[1] = C[1] - B[1];

    V1mod = sqrt(V1[0]*V1[0] + V1[1]*V1[1]);
    V2mod = sqrt(V2[0]*V2[0] + V2[1]*V2[1]);

    ang = acos((V1[0]*V2[0] + V1[1]*V2[1]) / (V1mod*V2mod));

    return(ang);
}


int main() {
    int A[2]={1,1}, B[2]={0,0}, C[2]={1,0};

    float ang;

    ang = angulo(A, B, C);

    printf("Radianos: %.2f\nGraus: %.2f\n", ang, 180*ang/3.141592653589793);

	return 0;
}
