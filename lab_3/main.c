#include <stdio.h>
#include <math.h>
int main() {
    int d,d2;
    int d1;
    
    printf("введите число в 10 с/с: ");
    scanf("%d",&d);

    printf("исходное число в 16 с/с: %X\n",d);
    printf("исходное число в 8 с/с: %o\n",d);
    printf("%o << 3 = %o \n",d,d << 3);


    d1 = ceil(log2(d));

    printf("~%o = %o\n", d, (1 << d1) + ~d );


    printf("введите новое число в 8 с/с: ");
    scanf("%o",&d2);
    printf("%o & %d = %d", d2,d,d2&d);

    return 0;
}


