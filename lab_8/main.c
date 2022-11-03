#include <stdio.h>
#include <string.h>
int main() {
    char s[30],s1[30],tmp1[30],tmp2[30];
    printf("Введите 1ю строку: ");
    scanf("%s",&s);
    strcpy(tmp1,s);

    printf("Введите 2ю строку: ");
    scanf("%s",&s1);
    strcpy(tmp2,s1);
    printf("Результат сложения: %s\n", strcat(tmp1,tmp2));
    printf("Результат сравнения: %d\n", strcmp(tmp1,tmp2));
    printf("Результат копирования: %s\n",strcpy(tmp1,tmp2));
    printf("Размер 1й строки - %d, 2-й строки - %d\n",strlen(s),strlen(s1));
    printf("Результат 12 задания: %d",strcspn(s,s1));

    return 0;
}



