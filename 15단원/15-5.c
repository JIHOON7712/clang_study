#include<stdio.h>

int main(void)
{
    int len;
    printf("Length of array :");
    scanf("%d",&len);
    int num[len];
    for(int i=0;i<len;i++){
        printf("Insert number :");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(num[j]>num[j+1]){
                int tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",num[i]);
    }
}