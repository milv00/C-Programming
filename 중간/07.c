#include <stdio.h>

//두 명 예약인거 해보기
void print_seat(int *S)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", S[i]);
    }
    printf("\n");
}
int main(void)
{
    char c;
    int n;
    int seats[10] = {0};

    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n)  ");
        scanf("%c", &c);
        if (c == 'n')
            break;
        else
        {
            printf("-------------------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("-------------------------------\n");
            print_seat(seats);

            printf("몇번째 좌석 예약? >>");
            scanf("%d", &n);
            if (seats[n - 1] == 0)
            {
                seats[n - 1] = 1;
                printf("예약되었습니다\n");
            }
            else
            {
                printf("이미 예약됨, 다른 좌석 선택\n");
            }
        }
    }
    return 0;
}