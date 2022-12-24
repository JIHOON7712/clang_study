#include<stdio.h>

int main(void)
{
	int dan=1,num=1;
	do
	{
		num=1;
		do
		{
			printf("%d´Ü: %dX%d=%d\n",dan,dan,num,dan*num);
			num++;
		}while(num<10);
		dan++;
	}while(dan<10);
	return 0;
}

