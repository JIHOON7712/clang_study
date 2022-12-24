#include<stdio.h>

int main(void)
{
	int input=0,total=0;
	while(input<101)
	{
		while(input%2!=0)
		{
			input++;
		}
			total+=input;
			input++;
	}
	printf("모든 짝수의 합은 %d입니다.\n",total);
}