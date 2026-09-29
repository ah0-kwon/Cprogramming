// **********************************************
// 제  목  :  14-2 실습과제4 소스코드
// 날  짜  :  2026년 9월29일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sep(double num, int* intg, double* dec);
int main(void)
{
    double num;
    int intg;
    double dec;

    printf("실수를 입력하시오: ");
    scanf("%lf", &num);

    sep(num, &intg, &dec);

    printf("정수부: %d\n", intg);
    printf("소수부: %lf\n", dec);

    return 0;
}
void sep(double num, int* intg, double* dec)
{
    *intg = (int)num;
    *dec = num - *intg;
}
