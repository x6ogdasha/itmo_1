#include <stdio.h>
#include <stdlib.h>
int main() {
    double arr[4];
    arr[0] = 56.4;
    arr[1] = 36.5;
    arr[2] = 7.7;
    arr[3] = 44.3;
    double *p = &arr[0];
    printf("1й массив: %.2f %.2f %.2f %.2f\n",*p,*(p+1),*(p+2),*(p+3));

    double *x = (double*)malloc(sizeof(double)*4);

    *x = 56.4;
    *(x+1) = 36.5;
    *(x+2) = 7.7;
    *(x+3) = 44.3;


    printf("2й дин-й массив: %.2f %.2f %.2f %.2f %.2f", *x,*(x+1),*(x+2),*(x+3));

    free(x);
    return 0;
}


