// **********************************************
// 제  목  :  23-2 실습과제2 소스코드
// 날  짜  :  2026년 11월12일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct students {
    char name[20];
    int id;
    int korean;
    int english;
    int math;
    double avg;
} Student;
int main(void)
{
    Student s[3];
    int max = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("이름: ");
        scanf("%s", s[i].name);
        printf("학번: ");
        scanf("%d", &s[i].id);
        printf("국어: ");
        scanf("%d", &s[i].korean);
        printf("영어: ");
        scanf("%d", &s[i].english);
        printf("수학: ");
        scanf("%d", &s[i].math);
        s[i].avg = (s[i].korean + s[i].english + s[i].math) / 3.0;
    }
    for (i = 1; i < 3; i++)
        if (s[i].avg > s[max].avg)
            max = i;
    printf("<최우수 학생정보>\n");
    printf("%s %d %d %d %d %f\n", s[max].name, s[max].id,
        s[max].korean, s[max].english, s[max].math, s[max].avg);
    return 0;
}
