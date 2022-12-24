#include<stdio.h>

int main(void)
{
	int num1,num2,num3;
	int result;
	printf("세 정수를 입력하시오 :");
	scanf("%d %d %d",&num1,&num2,&num3);
	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("(num1-num2)X(num2+num3)X(num3 um1) :%d\n",result);
	return 0;
}