#include<stdio.h>

int main(void)
{
	int x;
	printf("원하는 정수를 입력하시오.:\n");
	scanf("%d",&x);
	printf("아스키 코드에서 입력된 정수에 해당하는 문자는 바로%c입니다.",x);
	return 0;
}