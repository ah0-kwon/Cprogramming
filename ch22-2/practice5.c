// **********************************************
// 제  목  :  22-2 실습과제5 소스코드
// 날  짜  :  2026년 11월5일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct product {
	char name[50];
	int price;
	int stock;
};
int main(void)
{
	struct product p[3];
	int i, max = 0, all = 0, sum = 0;
	for (i = 0; i < 3; i++)
	{
		printf("제품명: ");
		scanf("%s", p[i].name);
		printf("가격: ");
		scanf("%d", &p[i].price);
		printf("재고 수량: ");
		scanf("%d", &p[i].stock);
	}
	printf("============ 상품 정보 ============\n");
	for (i = 0; i < 3; i++)
	{
		printf("제품명: %s, 가격: %d원, 재고 수량 : %d개\n", 
			p[i].name, p[i].price, p[i].stock);
	}
	for (i = 1; i < 3; i++)
	{
		if (p[i].stock > p[max].stock)
			max = i;
	}

	for (i = 0; i < 3; i++)
	{
		all += p[i].stock;
		sum += p[i].price * p[i].stock;
	}
	printf("============ 재고 분석 ============\n");
	printf("가장 많은 재고 수량의 제품명: %s\n", p[max].name);
	printf("전체 재고 수량: %d개\n", all);
	printf("전체 재고 금액: %d원\n", sum);
	return 0;
}
