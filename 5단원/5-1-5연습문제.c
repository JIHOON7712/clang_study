#include<stdio.h>

int main(void)
{
	char x;
	printf("원하는 알파벳을 입력하시오.:\n");
	scanf("%c",&x);
	printf("다음 알파벳에 해당하는 아스키 코드는 %d입니다.",x);
	return 0;
}