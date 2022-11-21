#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(void)
{
    int prices[SIZE] = {0};
    int i, minimum, max;
    printf("---------------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("---------------------------------\n");
    //돌릴때마다 랜덤
    srand((unsigned)time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        prices[i] = rand() % 100;
        printf("%d ", prices[i]);
    }
    minimum = prices[0];
    for (i = 1; i < SIZE; i++)
    {
        if (minimum > prices[i])
            minimum = prices[i];
    }
    max = prices[0];
    for (i = 1; i < SIZE; i++)
    {
        if (max < prices[i])
            max = prices[i];
    }

    printf("\n최소 %d", minimum);
    printf("\n최대 %d", max);

    return 0;
}