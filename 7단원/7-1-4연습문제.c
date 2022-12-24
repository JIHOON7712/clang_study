#include<stdio.h>

int main(void)
{
	int x,y=9;
	printf("정수를 입력하시오.:\n");
	scanf("%d",&x);
	while(y!=0)
	{
		printf("%dX%d=%d\n",x,y,x*y);
		y=y-1;
	}
	return 0;
}
