#include<stdio.h>

int main(void)
{
	int input,count=1,total=0;
	while(count<6)
	{
		printf("%d��° ������ �Է��Ͻÿ�.\n",count);
		scanf("%d",&input);
		while(input<1)
		{
			printf("�ٽ� ������ �Է��Ͻÿ�.:\n");
			scanf("%d",&input);
		}
		total+=input;
		count++;
	}
	printf("���� ������ ���� %d�Դϴ�.\n",total);
	return 0;
}
