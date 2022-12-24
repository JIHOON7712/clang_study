#include<stdio.h>
#include<stdlib.h>

typedef struct{
    double real;
    double ima;
}Complex;

Complex* multiple(Complex a1,Complex a2){         //�� ���Ҽ� ����ü�� �޾Ƽ� ���ϴ� �Լ�
    Complex* ptr=(Complex*)malloc(sizeof(Complex));         //�Լ� ������ ������� ������ �Լ� ����� ���ÿ� ����� �ٴ� ���� ���!!
    ptr->real=(a1.real*a2.real)-(a1.ima*a2.ima);
    ptr->ima=(a1.ima*a2.real)+(a1.real*a2.ima);
    return ptr;
}

Complex* plus(Complex a1,Complex a2){     // �� ���Ҽ� ����ü�� �޾Ƽ� ���ϴ� �Լ�
    Complex* ptr=(Complex*)malloc(sizeof(Complex));
    ptr->real=a1.real+a2.real;
    ptr->ima=a1.ima+a2.ima;
    return ptr;
}


int main(void)
{
    Complex a1,a2;
    printf("���Ҽ��� �Է��Ͻÿ�. :");
    scanf("%lf %lf",&a1.real,&a1.ima);
    getchar();
    printf("���Ҽ��� �Է��Ͻÿ�. :");
    scanf("%lf %lf",&a2.real,&a2.ima);
    getchar();
    printf("�� ���Ҽ��� ���� �Ǽ��κ� : %f ����κ� : %f\n",*plus(a1,a2),plus(a1,a2)[1]);
    printf("�� ���Ҽ��� ���� �Ǽ��κ� : %f ����κ� : %f\n",*multiple(a1,a2),multiple(a1,a2)[1]);
}


//scanf�Լ����� double�� �Ǽ��� ���� ���� %lf����� ��!