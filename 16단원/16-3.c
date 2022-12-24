#include<stdio.h>

int main(void)
{
    char* sub[4]={"kor","eng","math","history"};
    char* name[4]={"a","b","c","d"};
    int score[5][5]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%s의 %s점수를 입력하시오: ",name[i],sub[j]);
            scanf("%d",&score[i][j]);
            score[i][4]+=score[i][j];
            score[4][j]+=score[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",score[i][j]);
        }
        printf("\n");
    }
}