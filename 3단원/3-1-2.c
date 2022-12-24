#include<stdio.h>

int main(void)
{
	int num1,num2,num3;
	printf("세 정수를 입력하시오 :");
	scanf("%d",&num1),scanf("%d",&num2),scanf("%d",&num3);
	printf("%dX%d+%d=%d\n",num1,num2,num3,num1*num2+num3);
	return 0;
}