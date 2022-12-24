#include<stdio.h>

int main(void)
{
	int num1,num2;
	printf("두 정수를 입력해주세요: "), scanf("%d %d",&num1,&num2);
	printf("두 수의 뺄셈은 : %d-%d=%d\n",num1,num2,num1-num2);
	printf("두 수의 곱셈은 : %dX%d=%d\n",num1,num2,num1*num2);
	return 0;
}