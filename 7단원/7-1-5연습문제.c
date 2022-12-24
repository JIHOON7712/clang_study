#include<stdio.h>

int main(void)
{
	int a=1,b,x,y=0,z=0;
	double c;
	printf("몇 개의 정수를 입력할 것인가요?:");
	scanf("%d",&x);
	b=x;
	while(x!=0)
	{
		printf("%d번째 정수를 입력하시오.:\n",a);
		scanf("%d",&z);
		a++;
		x=x-1;
		y=y+z;
	}
	c=(double)y/b;
	printf("이 수들의 평균은 %f이다.\n",c);
	return 0;
}


