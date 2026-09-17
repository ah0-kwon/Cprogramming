// **********************************************
// 제  목  :  13-2 실습과제5 소스코드
// 날  짜  :  2026년 9월18일
// 작성자  :  2600015 권아영
// **********************************************

#include <stdio.h>
int main(void)
{
	char* fruits[] = { "apple", "blueberry", "orange", "melon" };
	int min = 0;

	for (int i = 1; i < 4; i++)
	{
		if (fruits[i][0] < fruits[min][0])
		{
			min = i;
		}

	}
	printf("사전에서 가장 앞에 나오는 문자열: %s\n", fruits[min]);
	return 0;
}
