#include <stdio.h>
int main(void)
{
    char board[3][3];
    int x, y, k, i;
    for (y = 0; y < 3; y++)
        board[x][y] = ' ';
    for (k = 0; k < 9; k++)
    {
        printf("(x, y) 좌표: ");
        scanf(" %d %d", &x, &y);
        board[x][y] = (k % 2 == 0) ? 'X' : 'O'; // 현재의 순번에 따라 'X', 'O'중 선택

        // 보드를 화면에 그린다.
        for (i = 0; i < 3; i++)
        {
            printf("---|---|---\n");
            printf("%c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        }
        printf("---|---|---\n");
    }
    return 0;
}