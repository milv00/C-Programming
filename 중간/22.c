#include <stdio.h>

int main(void)
{

    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    // 10000    10000   10000
    pc++;
    pi++;
    pd++;

    printf("증가 후 pc = %d , pi = %d, pd = %d\n", pc, pi, pd);
    // 10001    10004   10008

    printf("증가 후 pc + 2 = %d , pi + 2 = %d, pd + 2 = %d\n", pc + 2, pi + 2, pd + 2);
    // 10003    10012   10024
}