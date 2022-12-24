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
    printf("섭씨 온도를 입력하시오.:");
    scanf("%lf",&cel);
    fah=1.8*cel+32;
    printf("%f에 해당하는 화씨온도는 %f입니다.",cel,fah);
}

void FahToCel(double fah,double cel)
{
    printf("화씨 온도를 입력하시오.:");
    scanf("%lf",&fah);
    cel=(fah-32)/1.8;
    printf("%f에 해당하는 섭씨온도는 %f입니다.",fah,cel);
}