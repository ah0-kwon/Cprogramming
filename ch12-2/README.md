# 실습과제1
| 수식 | 결과값 | 결과값의 자료형 |
| :--- | :--- | :--- |
| `&ch` | 100 | `char *` |
| `&in` | 101 | `int *` |
| `&db` | 105 | `double *` |
| `*&ch` | 'A' | `char` |
| `*&in` | 10 | `int` |
| `*&db` | 3.4 | `double` |

# 실습과제2
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안오류방지
```
#pragma warning(disable:6031)
```
- 리턴값관련 경고 방지
```
#include <stdio.h>
```
-
```
int main(void)
```
```
int a = -100;
```
```
char b = 'A';
```
```
double c = 3.14;
```
```
printf("int형 변수 a의 값은 : %d\n", *&a);
```
```
printf("char형 변수 b의 값은 : %c\n", *&b);
```
```
printf("double형 변수 c의 값은 : %lf\n", *&c);
```
```
return 0;
```
