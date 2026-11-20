// **********************************************
// 제  목  :  24-2 실습과제3 소스코드
// 날  짜  :  2026년 11월20일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct student {
    char name[20];
    int score1;
    int score2;
    int score3;
    int total;
    double avg;
} Student;
int main(void)
{
    Student s[3], temp;

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

    for (int i = 0; i < 3; i++) {
        if (fscanf(fp1, "%19s %d %d %d",
            s[i].name,
            &s[i].score1,
            &s[i].score2,
            &s[i].score3) != 4) {
            printf("학생 정보 입력 실패\n");
            fclose(fp1);
            fclose(fp2);
            return -1;
        }

        s[i].total = s[i].score1
            + s[i].score2
            + s[i].score3;
        s[i].avg = s[i].total / 3.0;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (s[i].total < s[j].total) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp2, "%d등: %s %d %.1f\n",
            i + 1,
            s[i].name,
            s[i].total,
            s[i].avg);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
