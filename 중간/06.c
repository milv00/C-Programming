#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int main(void)
{
    int i;
    int freq[SIZE] = {0};

    for (i = 0; i < 10000; i++)
    {
        ++freq[rand() % 6];
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", freq[i]);
    }
}