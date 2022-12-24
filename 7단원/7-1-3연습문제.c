#include<stdio.h>

int main(void)
{
	int x=0,y;
	printf("정수를 입력하시오.:");
	scanf("%d",&y);
	while(y!=0)
	{
		x=x+y;
		printf("정수를 입력하시오.:");
		scanf("%d",&y);
	}
	printf("%d\n",x);
	return 0;
}

