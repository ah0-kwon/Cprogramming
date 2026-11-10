// **********************************************
// 제  목  :  23-1 실습과제4 소스코드
// 날  짜  :  2026년 11월10일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
} Point;
void swap_struct(Point* p1, Point* p2);
int main(void)
{
	Point pos1 = { 1, 2 };
	Point pos2 = { 3, 4 };
	printf("pos1: [%d, %d] , pos2 : [%d, %d] \n", pos1.xpos, pos1.ypos,
		pos2.xpos, pos2.ypos);
	swap_struct(&pos1, &pos2);
	printf("pos1: [%d, %d] , pos2 : [%d, %d] \n", pos1.xpos, pos1.ypos,
		pos2.xpos, pos2.ypos);
	return 0;
}
void swap_struct(Point* p1, Point* p2)
{
	Point temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
