#include <stdio.h>
#define UP       10
#define DOWN     20
#define LEFT     30
#define RIGHT    40

int main(void)
{
    int direction = UP;
    switch (direction)
    {
    case UP:    printf("현재 방향: 위");     break;
    case DOWN:  printf("현재 방향: 아래");   break;
    case LEFT:  printf("현재 방향: 왼쪽");   break;
    case RIGHT: printf("현재 방향: 오른쪽"); break;
    }
    return 0;
}
