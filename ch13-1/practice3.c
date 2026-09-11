#include <stdio.h>
int main(void)
{
    int a[] = { 10, 20, 30 };
    int i, sum = 0;
    int* p = a;

    for (i = 0; i < 3; i++)
    {
        sum += *p++;
    }

    printf("sum:%d\n", sum);
    return 0;
}
