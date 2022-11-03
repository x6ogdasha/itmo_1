#include <stdio.h>

int main() {
    int n,n1;
    printf("введите целое число: ");
    scanf("%d",&n);
    (n>=21 && n<=56) ? printf("число попадает в диапозон") : printf("число не попадает в диапозон");
    printf("\nвведите число в 8сс: ");
    scanf("%o",&n1);
    (n1 & (1 << 12)) ? printf("12 бит - 1") : printf("12 бит - 0");
    return 0;

}


