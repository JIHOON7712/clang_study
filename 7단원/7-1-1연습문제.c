#include<stdio.h>

int main(void)
{
	int x,y;
	x=0;
	y=0;
	printf("정수를 입력하시오.:");
	scanf("%d",&y);
	while(x<y)
	{
		printf("Hello World!\n");
		x++;
	}
	return 0;
}
