#include<stdio.h>

void cou(void);

int main(void)
{
    printf("���� ����� �����ϰ� �ִ� �ݾ� :%d\n",3500);
    cou();
    printf("��� �����Ͻðڽ��ϱ�?");
    return 0;
}

void cou(void)
{
    int x=1,y=1,z=1,result;
    for(;x<=7;x++)
    {
        for(y=1;y<=5;y++)
        {
            for(z=1;z<=8;z++)
            {
                result=500*x+700*y+400*z;
                if(result==3500)
                    printf("ũ���� %d�� ����� %d��  �ݶ� %d��\n",x,y,z);
            }
        }
    }
}