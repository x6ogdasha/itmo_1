#include <stdio.h>
#include <math.h>
enum Months{
    January, // 0
    February, // 1
    March, // 2
    April, // 3
    May, // 4
    June, // 5
    July, // 6
    August,
    September,
    October,
    December
};
struct segment{
    double x1,y1,x2,y2;
};

union my_union{
    int x;
    struct BF{
        unsigned int dsl:1;
        unsigned int ppp:1;
        unsigned int link:1;
    } my_bf;
};
int main() {
    enum Months m = July;
    printf("%d\n",m);

    struct segment n = {0,0,6,0};
    double len = sqrt((n.x1-n.x2)*(n.x1-n.x2)+(n.y1-n.y2)*(n.y1-n.y2));
    printf("Len: %.2f\n",len);

    union my_union u;
    int x;
    scanf("%X",&x);

    u.x = x;
    printf("%d %d %d",u.my_bf.dsl,u.my_bf.ppp,u.my_bf.link);
    return 0;
}
