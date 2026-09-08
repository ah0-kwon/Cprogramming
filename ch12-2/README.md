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
#include <stdio.h>
```
- 표준 입출력 헤더 파일 포함
```
int main(void)
```
- 메인 함수 시작
```
int a = -100;
```
- 정수형 변수 `a` 선언 및 `-100` 대입
```
char b = 'A';
```
- 문자형 변수 `b` 선언 및 `'A'` 대입
```
double c = 3.14;
```
- 실수형 변수 `c` 선언 및 `3.14` 대입
```
printf("int형 변수 a의 값은 : %d\n", *&a);
```
- `a`의 주소를 역참조한 값(`-100`)을 정수로 출력
```
printf("char형 변수 b의 값은 : %c\n", *&b);
```
- `b`의 주소를 역참조한 값(`'A'`)을 문자로 출력
```
printf("double형 변수 c의 값은 : %lf\n", *&c);
```
- `c`의 주소를 역참조한 값(`3.14`)을 실수로 출력
```
return 0;
```
- 프로그램 종료

#소스코드

<img width="432" height="91" alt="스크린샷 2026-09-08 205921" src="https://github.com/user-attachments/assets/d1a22b9a-3241-41bd-9ec8-b729bb1026c8" />

# 실습과제3
```
#include<stdio.h>

int main(void)
{
	int* ptr = (int*)125; // ①
	*ptr = 10;
	printf("%d\n", *ptr);
	return 0;
}
```
