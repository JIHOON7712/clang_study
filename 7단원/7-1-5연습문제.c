#include<stdio.h>

int main(void)
{
	int a=1,b,x,y=0,z=0;
	double c;
	printf("�� ���� ������ �Է��� ���ΰ���?:");
	scanf("%d",&x);
	b=x;
	while(x!=0)
	{
		printf("%d��° ������ �Է��Ͻÿ�.:\n",a);
		scanf("%d",&z);
		a++;
		x=x-1;
		y=y+z;
	}
	c=(double)y/b;
	printf("�� ������ ����� %f�̴�.\n",c);
	return 0;
}


