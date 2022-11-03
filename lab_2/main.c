#include <stdio.h>
#include <math.h>
int main() {

    float a=0,z1=0,z2=0; //объявление, инициализация
    scanf("%f",&a); // и ввод с консоли

    double val = a*(M_PI/180); // для перевода из радиан в углы

    z1 = (1-2*sin(val)*sin(val))/(1+sin(2*val));
    z2 = (1-tan(val))/(1+tan(val));

    printf("z1 = %f\n",z1);
    printf("z2 = %f\n",z2);

    return 0;
}
