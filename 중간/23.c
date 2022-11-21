#include <stdio.h>
int main(void)
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi); // 10   10000
    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi); // 11   10000
    *pi++;
    printf("i = %d, pi = %p\n", i, pi); // 11   10004
    (*pi)--;
    printf("i = %d, pi = %p\n", i, pi); // 10   10004 ????
    *pi--;
    printf("i = %d, pi = %p\n", i, pi); // 10   10004

    return 0;
}