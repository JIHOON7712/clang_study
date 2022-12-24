#include<stdio.h>

void ComplexFuncOne(int**,int*(*p1)[5]);
void ComplexFuncTwo(int***,int***(*p2)[5]);

int main(void)
{
    int* arr1[3];
    int* arr2[3][5];
    int** arr3[5];
    int*** arr4[3][5];

    ComplexFuncOne(arr1,arr2);
    ComplexFuncTwo(arr3,arr4);
}