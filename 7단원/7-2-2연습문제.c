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
	printf("��� ¦���� ���� %d�Դϴ�.\n",total);
}