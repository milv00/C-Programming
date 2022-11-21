#include <stdio.h>
#define SIZE 5

int get_average(int scores[], int n);

int main(void)
{
    int scores[SIZE] = {1, 2, 3, 4, 5};
    int avg;

    avg = get_average(scores, SIZE);
    printf("%d", avg);
    return 0;
}

int get_average(int scores[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += scores[i];
    return sum / n;
    ©
}
2012