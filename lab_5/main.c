#include <stdio.h>

int main() {
    int arr[7] = {23,5678,2,564,365,77,443};
    for(int i = 0; i < 7; i++) printf("%d-й элемент: %d\n",i,arr[i]);

    int a[2][2],b[2][2],c[2][2];
    a[0][0] = 1;
    a[0][1] = 1;
    a[1][0] = 1;
    a[1][1] = 4;

    b[0][0] = 1;
    b[0][1] = 2;
    b[1][0] = 4;
    b[1][1] = 1;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            c[i][j] = (a[i][0]*b[0][j]) + (a[i][1]*b[1][j]);
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}



