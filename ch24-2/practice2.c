// **********************************************
// 제  목  :  24-2 실습과제2 소스코드
// 날  짜  :  2026년 11월20일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void) 
{
    char name[20];
    int score1, score2, score3;

    FILE* fp1 = fopen("input.txt", "rt");
    if (fp1 == NULL) {
        printf("입력 파일 열기 실패\n");
        return -1;
    }

    FILE* fp2 = fopen("output.txt", "wt");
    if (fp2 == NULL) {
        printf("출력 파일 열기 실패\n");
        fclose(fp1);
        return -1;
    }
    while (fscanf(fp1, "%19s %d %d %d",
        name, &score1, &score2, &score3) == 4) {
        int total = score1 + score2 + score3;
        double avg = total / 3.0;
        fprintf(fp2, "%s %d %.1f\n", name, total, avg);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
