#include<stdio.h>

void height(int (*arr)[]);
void width(int (*arr)[]);

int main(void)
{
    int len;
    printf("Insert the length: ");
    scanf("%d",&len);
    int arr[len][len];
    int num=1;
    for(int k=0;k<len;k++){
        if(k==0){
            for(int p=0;p<len;p++){
                arr[0][p]=num;
                num++;
            }
            continue;
        }
        if(k%2==1){
            int t=k/2+1;
            for(int p=t;p<len-(t-1);p++){
                arr[p][len-t]=num;
                num++;
            }
            for(int p=len-(t+1);p>=t-1;p--){
                arr[len-t][p]=num;
                num++;
            }
        }
        else if(k%2==0){
            int t=k/2;
            for(int p=len-t-1;p>=t;p--){
                arr[p][t-1]=num;
                num++;
            }
            for(int p=t;p<=len-t-1;p++){
                arr[t][p]=num;
                num++;
            }
        }
        }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            printf("%4d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

