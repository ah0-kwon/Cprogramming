// **********************************************
// 제  목  :  22-2 실습과제4 소스코드
// 날  짜  :  2026년 11월5일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>
struct point {
	int x;
	int y;
};
struct triangle {
	struct point p[3];
};
int main(void)
{
	struct triangle t;
	int i;
	double a, b, c;
	for (i = 0; i < 3; i++)
	{
		printf("%d번째 점(x,y) 입력: ", i + 1);
		scanf("%d %d", &t.p[i].x, &t.p[i].y);
	}

	a = pow(t.p[1].x - t.p[0].x, 2) +
		pow(t.p[1].y - t.p[0].y, 2);
	b = pow(t.p[2].x - t.p[1].x, 2) +
		pow(t.p[2].y - t.p[1].y, 2);
	c = pow(t.p[0].x - t.p[2].x, 2) +
		pow(t.p[0].y - t.p[2].y, 2);

	if (a > 0 && b > 0 && c > 0 && (a + b == c || b + c == a || c + a == b))
		printf("삼각형은 직각삼각형임");
	else
		printf("삼각형은 직각삼각형이 아님");
	return 0;
