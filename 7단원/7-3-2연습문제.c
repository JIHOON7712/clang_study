#include<stdio.h>

int main(void)
{
	int input,start=1,result=1;
	printf("������ �Է��Ͻÿ�.:\n");
	scanf("%d", &input);
	for (; start <= input; start++)
	{
		result *= start;
	}
	printf("%d!=%d\n",input, result);
	return 0;
}