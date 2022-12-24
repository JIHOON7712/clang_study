#include<stdio.h>

int main(void)
{
	int num1,num2;
	printf("두 정수를 입력하시오 :");
	scanf("%d %d",&num1, &num2);
	printf("두 정수를 나누었을 때 얻는 몫은 %d이고, 나머지는 %d이다.\n",num1/num2,num1%num2);
	return 0;
}