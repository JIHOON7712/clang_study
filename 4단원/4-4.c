#include<stdio.h>

int main(void)
{
	int num;
	printf("������ :");
	scanf("%d",&num);
	int result=~num+1;
	printf("%d\n",result);
	return 0;
}

