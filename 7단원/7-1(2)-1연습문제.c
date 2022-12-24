#include<stdio.h>

int main(void)
{
	int input,count=1,total=0;
	while(count<6)
	{
		printf("%d번째 정수를 입력하시오.\n",count);
		scanf("%d",&input);
		while(input<1)
		{
			printf("다시 정수를 입력하시오.:\n");
			scanf("%d",&input);
		}
		total+=input;
		count++;
	}
	printf("다음 정수의 합은 %d입니다.\n",total);
	return 0;
}
