#include<stdio.h>

int main(void)
{
	int x1,x2,y1,y2,result;
	printf("�� ����� x,y��ǥ�� �Է��Ͻÿ�.: \n");
	scanf("%d %d",&x1,&y1);
	printf("�� ����� x,y��ǥ�� �Է��Ͻÿ�.: \n");
	scanf("%d %d",&x2,&y2);
	result=(x1-x2)*(y1-y2);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n",result);
	return 0;
}