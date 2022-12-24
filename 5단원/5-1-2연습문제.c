#include<stdio.h>

int main(void)
{
	double num1,num2,result;
	printf("두 실수를 입력하시오.:\n");
	scanf("%lf %lf",&num1,&num2);
	result=num1+num2;
	printf("두 실수의 덧셈은%f입니다.",result);
	return 0;
}