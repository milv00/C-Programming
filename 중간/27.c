#include <stdio.h>
int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    printf("a = %u\n", a);             // 10000
    printf("a + 1 = %u\n", a + 1);     // 10004
    printf("*a = %d\n", *a);           // 10
    printf("*(a+1) = %d\n", *(a + 1)); // 20
    return 0;
}