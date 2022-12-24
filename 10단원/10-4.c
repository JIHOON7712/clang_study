#include<stdio.h>

void cou(void);

int main(void)
{
    printf("현재 당신이 소유하고 있는 금액 :%d\n",3500);
    cou();
    printf("어떻게 구입하시겠습니까?");
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
                    printf("크림빵 %d개 새우깡 %d개  콜라 %d개\n",x,y,z);
            }
        }
    }
}