#include<stdio.h>

int main(void)
{
	int x=0,y;
	printf("������ �Է��Ͻÿ�.:");
	scanf("%d",&y);
	while(y!=0)
	{
		x=x+y;
		printf("������ �Է��Ͻÿ�.:");
		scanf("%d",&y);
	}
	printf("%d\n",x);
	return 0;
}

