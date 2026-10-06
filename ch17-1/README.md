# 실습과제1
|수식|결과값|결과값의 자료형|
|:----:|:----:|:----:|
|ptr|100|double*|
|dptr|300|double**|
|&ptr|300|double**|
|&dptr|500|double***|
|*ptr|6.28|double|
|*dptr|100|double*|
|**dptr|6.28|double|

# 실습과제2
#실행결과

<img width="146" height="47" alt="스크린샷 2026-10-06 201640" src="https://github.com/user-attachments/assets/ba1d5e59-fa22-42e4-8f41-6459268f1019" />

# 실습과제3
#실행결과

<img width="126" height="110" alt="스크린샷 2026-10-06 202432" src="https://github.com/user-attachments/assets/327de760-88b5-4d2a-9917-5ecf04ea47bf" />

# 실습과제4
#소스코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
-보안오류방지
```
#pragma warning(disable:6031)
```
-리턴값관련 경고 방지
```
#include <stdio.h>
```
-표준 입출력 함수를 사용하기 위한 헤더 파일 포함
```
void MaxAndMin(int** maxPtr, int** minPtr, int arr[])
```
-최댓값, 최솟값 찾는 함수 정의
```
int i;
```
-반복문에 사용할 변수
```
*maxPtr = &arr[0];
```
-첫 번째 배열 값을 최댓값이라 가정
```
*minPtr = &arr[0];
```
-첫 번째 배열 값을 최솟값이라 가정
```
for (i = 1; i < 5; i++)
```
-두 번째 배열부터 마지막까지 검사
```
if (**maxPtr < arr[i])
    *maxPtr = &arr[i];
```
-만약 현재 최댓값보다 arr[i] 값이 크다면 그 값의 주소를 maxPtr에 저장
```
if (**minPtr > arr[i])
    *minPtr = &arr[i];
```
-만약 현재 최솟값보다 arr[i] 값이 작다면 그 값의 주소를 minPtr에 저장
```
int main(void)
```
-메인함수 시작
```
int* maxPtr;
```
-최댓값이 있는 배열 요소의 주소를 저장할 포인터
```
int* minPtr;
```
-최솟값이 있는 배열 요소의 주소를 저장할 포인터
```
int arr[5];
```
-정수 5개를 저장할 배열
```
int i;
```
-반복문에 사용할 변수
```
printf("5개의 정수 입력: ");
```
-사용자에게 숫자 입력하라고 출력
```
for (i = 0; i < 5; i++)
```
-5번 반복
```
scanf("%d", &arr[i]);
```
-사용자가 입력한 숫자를 arr[i]에 저장
```
MaxAndMin(&maxPtr, &minPtr, arr);
```
-배열을 함수에 전달하고 최댓값, 최솟값의 주소를 찾음
```
printf("최댓값: %d\n", *maxPtr);
```
-maxPtr이 가리키는 최댓값 출력
```
printf("최솟값: %d\n", *minPtr);
```
-minPtr이 가리키는 최솟값 출력
```
return 0;
```
-프로그램 종료

#실행결과

<img width="351" height="92" alt="스크린샷 2026-10-06 211150" src="https://github.com/user-attachments/assets/dc158d7b-1000-4fa1-b1b0-2cf14ff96e0a" />
