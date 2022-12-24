#include<stdio.h>

int main(void)
{
	int line=0,circle=0;
	while(line<5)
	{
		circle=0;
		while(circle<line)
		{
			printf("o ");
			circle++;
		}
		line++;
		printf("*\n");
	}
	return 0;
}
