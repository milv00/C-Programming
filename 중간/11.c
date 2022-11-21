#include <stdio.h>
#define SIZE 10
int main(void)
{
    int key, i;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("탐색할 값을 입력하시오:");
    scanf("%d", &key);

    for (i = 0; i < SIZE; i++)
    {
        if (key == list[i])
            printf("%d", i);
    }
    return 0;
}