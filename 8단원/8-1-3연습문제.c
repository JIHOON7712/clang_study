#include<stdio.h>

int main(void)
{
    int sco1,sco2,sco3,average=0;
    printf("국어 점수를 순서대로 입력하시오. :");
    scanf("%d",&sco1);
    printf("수학 점수를 순서대로 입력하시오. :");
    scanf("%d",&sco2);
    printf("영어 점수를 순서대로 입력하시오. :");
    scanf("%d",&sco3);
    average=(double)sco1+sco2+sco3/3;
    if(average>=90)
        printf(" 학점은 A");
    else if(average>=80)
        printf("학점은 B");
    else if(average>=70)
        printf("학점은 C");
    else if(average>=50)
        printf("학점은 D");
    else
        printf("학점은 F");
    return 0;
}