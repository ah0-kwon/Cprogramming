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
```
#pragma warning(disable:6031)
```
```
#include <stdio.h>
```
```
void MaxAndMin(int** maxPtr, int** minPtr, int arr[])
```
```
int i;
```
```
*maxPtr = &arr[0];
```
```
*minPtr = &arr[0];
```
```
for (i = 1; i < 5; i++)
```
```
if (**maxPtr < arr[i])
    *maxPtr = &arr[i];
```
```
if (**minPtr > arr[i])
    *minPtr = &arr[i];
```
```
int main(void)
```
```
int* maxPtr;
```
```
int* minPtr;
```
```
int arr[5];
```
```
int i;
```
```
printf("5개의 정수 입력: ");
```
```
for (i = 0; i < 5; i++)
```
```
scanf("%d", &arr[i]);
```
```
MaxAndMin(&maxPtr, &minPtr, arr);
```
```
printf("최댓값: %d\n", *maxPtr);
```
```
printf("최솟값: %d\n", *minPtr);
```
```
return 0;
```

#실행결과

<img width="351" height="92" alt="스크린샷 2026-10-06 211150" src="https://github.com/user-attachments/assets/dc158d7b-1000-4fa1-b1b0-2cf14ff96e0a" />
