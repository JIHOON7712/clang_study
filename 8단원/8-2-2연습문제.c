#include<stdio.h>

int main(void)
{
    int A=1,Z=1,result;
    for(;A<10;A++)
    {
        for(Z=1;Z<10;Z++)
        {
            result=11*A+11*Z;
            if(result==99)
            {
                printf("���� ���� �����ϴ� ���� A=%d,Z=%d�Դϴ�.\n",A,Z);
                break;
            }
            else
                continue;
        }
    }
    return 0;
}