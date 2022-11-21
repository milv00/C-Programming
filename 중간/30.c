#include <stdio.h>
#define SIZE 5
void print_image(int a[][SIZE])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%03d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void brighten_image(int a[][SIZE])
{
    int *A;
    A = &a[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            *A += 10;
            A++;
        }
    }
}
int main(void)
{
    int image[5][5] = {
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50}};
    print_image(image);
    brighten_image(image);
    print_image(image);
    return 0;
}
