#include <stdio.h>
// 값에 의한 호출은 원본 안바뀜
void swap(int x, int y)
{
    printf("%d %d\n", x, y);
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("%d %d\n", x, y);
}
int main(void)
{
    int a = 100, b = 200;
    printf("a = % d b = % d\n", a, b);
    swap(a, b);
    printf("a = % d b = % d\n", a, b);
    return 0;
}