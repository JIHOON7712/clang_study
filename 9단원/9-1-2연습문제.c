#include<stdio.h>

void CelToFah(double cel,double fah);
void FahToCel(double fah,double cel);

int main(void)
{
    int sel;
    double cel,fah;
    printf("1.C>F 2. F>C:");
    scanf("%d",&sel);
    if(sel==1)
        CelToFah(cel,fah);
    else if(sel==2)
        FahToCel(fah,cel);
    return 0;
}

void CelToFah(double cel,double fah)
{
    printf("���� �µ��� �Է��Ͻÿ�.:");
    scanf("%lf",&cel);
    fah=1.8*cel+32;
    printf("%f�� �ش��ϴ� ȭ���µ��� %f�Դϴ�.",cel,fah);
}

void FahToCel(double fah,double cel)
{
    printf("ȭ�� �µ��� �Է��Ͻÿ�.:");
    scanf("%lf",&fah);
    cel=(fah-32)/1.8;
    printf("%f�� �ش��ϴ� �����µ��� %f�Դϴ�.",fah,cel);
}