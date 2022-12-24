#include<stdio.h>

int main(void)
{
	int x1,x2,y1,y2,result;
	printf("좌 상단의 x,y좌표를 입력하시오.: \n");
	scanf("%d %d",&x1,&y1);
	printf("우 상단의 x,y좌표를 입력하시오.: \n");
	scanf("%d %d",&x2,&y2);
	result=(x1-x2)*(y1-y2);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n",result);
	return 0;
}