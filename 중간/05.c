#include <stdio.h>

int main(void)
{
    int scores[] = {1, 2, 3, 4, 5, 6};
    int i, size;

    size = sizeof(scores) / sizeof(scores[0]);
    for (i = 0; i < size; i++)
        printf("%d ", scores[i]);

    printf("\n");
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    // 배열 복사
    for (i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < 5; i++)
        printf("%d ", b[i]);

    for (i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
            printf("NOT SAME");
    }

    return 0;
}