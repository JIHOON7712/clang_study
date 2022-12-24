#include<stdio.h>

int main(void)
{
	int x=1,y=0;
	printf("정수를 입력하시오.:\n");
	scanf("%d",&y);
	while(x<=y)
	{
		printf("%d\n",x*3);
		x++;
	}
	return 0;
}
