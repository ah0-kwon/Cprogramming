#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
void calculate(int (*operation)(int, int))
{
    int a, b;
    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &a, &b);
    printf("결과값: %d\n", operation(a, b));
}

int main()
{
    int choice;
    printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        calculate(add);
        break;
    case 2:
        calculate(subtract);
        break;
    case 3:
        calculate(multiply);
        break;
    case 4:
        calculate(divide);
        break;
    default:
        printf("잘못된 선택입니다.\n");
    }
    return 0;
}
