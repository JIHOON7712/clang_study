#include<stdio.h>
#include<stdlib.h>

typedef struct{
    double real;
    double ima;
}Complex;

Complex* multiple(Complex a1,Complex a2){         //두 복소수 구조체를 받아서 곱하는 함수
    Complex* ptr=(Complex*)malloc(sizeof(Complex));         //함수 내에서 만들어진 변수는 함수 종료와 동시에 사라진 다는 점을 명심!!
    ptr->real=(a1.real*a2.real)-(a1.ima*a2.ima);
    ptr->ima=(a1.ima*a2.real)+(a1.real*a2.ima);
    return ptr;
}

Complex* plus(Complex a1,Complex a2){     // 두 복소수 구조체를 받아서 더하는 함수
    Complex* ptr=(Complex*)malloc(sizeof(Complex));
    ptr->real=a1.real+a2.real;
    ptr->ima=a1.ima+a2.ima;
    return ptr;
}


int main(void)
{
    Complex a1,a2;
    printf("복소수를 입력하시오. :");
    scanf("%lf %lf",&a1.real,&a1.ima);
    getchar();
    printf("복소수를 입력하시오. :");
    scanf("%lf %lf",&a2.real,&a2.ima);
    getchar();
    printf("두 복소수의 합은 실수부분 : %f 허수부분 : %f\n",*plus(a1,a2),plus(a1,a2)[1]);
    printf("두 복소수의 곱은 실수부분 : %f 허수부분 : %f\n",*multiple(a1,a2),multiple(a1,a2)[1]);
}


//scanf함수에서 double형 실수를 받을 때는 %lf사용할 것!