// **********************************************
// 제  목  :  23-2 실습과제4 소스코드
// 날  짜  :  2026년 11월12일
// 작성자  :  2600015 권아영
// **********************************************

#include <stdio.h>
typedef enum direction
{
	up, down, left, right
} Direction;
void directions(Direction way);
int main(void)
{
	Direction way;
	for (way = up; way <= right; way += 1)
		directions(way);
	return 0;
}
void directions(Direction way)
{
	switch (way)
	{
	case up: printf("현재방향: 위\n"); break;
	case down: printf("현재방향: 아래\n"); break;
	case left: printf("현재방향: 왼쪽\n"); break;
	case right: printf("현재방향: 오른쪽\n"); break;
	}
}
