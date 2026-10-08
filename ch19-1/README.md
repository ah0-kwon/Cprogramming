# 실습과제1
## 함수 선언, 호출, 정의를 각각 설명하라
1. 선언 : 컴파일러에게 어떤 함수의 존재와 형태를 알려주는 것
2. 정의 : 함수가 실제로 어떤 작업을 수행하는지 구현한 것
3. 호출 : 정의된 함수를 실제로 사용하는 것
## 함수의 자료형은?
반환형과 매개변수의 자료형
## 함수명의 자료형은?
(함수의 자료형)*
## void 포인터의 용도는?
모든 종류의 주소를 저장할 수 있다.
## void 포인터에 간접참조 연산을 적용할 때 주의할 점은?
void 포인터는 자료형이 정해져 있지 않아서 직접 간접참조할 수 없다. 사용하기 위해서는 강제형변환을 해야 한다.
## 강제형변환과 자동형변환을 설명하시오
1. 강제형변환 : 프로그래머가 직접 자료형을 변환
2. 자동형변환 : 컴파일러가 자동으로 자료형을 변환
# 실습과제2
## 함수의 매개변수에 함수 포인터를 활용하는 예제
- 소스코드
```
#include <stdio.h>
void greetMorning() { printf("Good morning!\n"); }
void greetEvening() { printf("Good evening!\n"); }

void greet(void (*func)()) {
  func();
}

int main() {
  greet(greetMorning);
  greet(greetEvening);
  return 0;
}
```

- 핵심코드설명 
```
void greet(void (*func)())
```
→ 함수 포인터를 매개변수로 받는다.
```
greet(greetMorning);
```
→ 함수를 매개변수로 전달한다.
```
func();
```
→ 전달받은 함수를 실행한다.

- 실행결과

<img width="196" height="68" alt="스크린샷 2026-10-08 200506" src="https://github.com/user-attachments/assets/1479b046-4871-46aa-a048-f1964f2bfbf1" />

## 함수의 매개변수에 void포인터를 활용하는 예제
- 소스코드
```
#include <stdio.h>
void printString(void* ptr)
{
    printf("str: %s\n", ptr);
}
int main()
{
    char* str = "hi there";
    printString(str);
    return 0;
}
```

- 핵심코드설명
```
void printString(void *ptr)
```
→ void 포인터를 함수의 매개변수로 사용합니다.
```
char *str = "hi there";
```
→ 문자열을 가리키는 포인터를 만듭니다.
```
printString(str);
```
→ str을 void * 매개변수에 전달합니다.
```
printf("str: %s\n", ptr);
```
→ 전달받은 포인터가 가리키는 문자열을 출력합니다.

- 실행결과

<img width="196" height="45" alt="스크린샷 2026-10-08 201134" src="https://github.com/user-attachments/assets/25bac876-6d7f-45d7-a423-347fa309360b" />

# 실습과제3
# 도전과제1
# 도전과제2
# 도전과제3
