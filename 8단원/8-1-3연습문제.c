#include<stdio.h>

int main(void)
{
    int sco1,sco2,sco3,average=0;
    printf("���� ������ ������� �Է��Ͻÿ�. :");
    scanf("%d",&sco1);
    printf("���� ������ ������� �Է��Ͻÿ�. :");
    scanf("%d",&sco2);
    printf("���� ������ ������� �Է��Ͻÿ�. :");
    scanf("%d",&sco3);
    average=(double)sco1+sco2+sco3/3;
    if(average>=90)
        printf(" ������ A");
    else if(average>=80)
        printf("������ B");
    else if(average>=70)
        printf("������ C");
    else if(average>=50)
        printf("������ D");
    else
        printf("������ F");
    return 0;
}