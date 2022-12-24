#include<stdio.h>

void Roatatearr(int (*ptr)[4]);
void Showarr(int (*ptr)[4]);
int main(void)
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int num;
    printf("Insert the rotate number: ");
    scanf("%d",&num);
    Showarr(&arr);
    for(int i=0;i<num;i++){
        Rotatearr(&arr);
        Showarr(&arr);
    }
}

void Showarr(int (*ptr)[4])
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    printf("\n");
}

void Rotatearr(int (*ptr)[4])
{
    int temp[4][4]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            temp[j][3-i]=ptr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ptr[i][j]=temp[i][j];
        }
    }
}