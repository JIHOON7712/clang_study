#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int num[3]={0},user[3];
    int count=1,i=0,j=0;
    while(num[0]==num[1]||num[1]==num[2]||num[0]==num[2]){
        srand((int)time(NULL));
        int ran=rand();
        num[0]=(ran/100)%10;
        num[1]=(ran/10)%10;
        num[2]=ran%10;
    }
    printf("%d %d %d\n",num[0],num[1],num[2]);
    printf("Start Game\n");
    for(;;count++){
        i=0,j=0;
        printf("%d번째 도전!!\n",count);
        printf("3개의 숫자 선택 : ");
        for(int k=0;k<3;k++){
            scanf("%d",&user[k]);
        }
        for(int k=0;k<3;k++){
            for(int p=0;p<3;p++){
                if(num[k]==user[k]){
                    i++;
                    break;
                }
                else if(num[k]==user[p]){
                    j++;
                    break;
                }
            }
        }
        if(i==3){
            printf("%d번째 도전 결과: %d srtike, %d ball\nCongratulation!",count,i,j);
            break;
        }
        else{
            printf("%d번째 도전 결과: %d srtike, %d ball\n",count,i,j);
            continue;
        }
    }
}
