#include<stdio.h>

int main(void)
{
    int A[2][4]={{1,2,3,4},{5,6,7,8}};
    int B[4][2];
    for(int j=0;j<2;j++){
        for(int i=0;i<4;i++){
            B[i][j]=A[j][i];
        }
    }
    for(int j=0;j<2;j++){
        for(int i=0;i<4;i++){
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}