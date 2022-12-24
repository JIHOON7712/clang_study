#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int rock=1,paper=2,sci=3,user;
    srand((int)time(NULL));
    for(int i=0,j=0;;){
        int com=rand()%3+1;
        printf("Rock is '1' Paper is '2' Scissor is '3'\n Put your Chose :");
        scanf("%d",&user);
        if(com==user){
            printf("TIE\n");
            j++;
            continue;
        }
        else if(user==1&&com==3){
            printf("WIN\n");
            i++;
            continue;
        }   
        else if(user==3&&com==1){
            printf("LOSE\n");
            printf("%d WINs, %d TIEs\n",i,j);
            break;
        }
        else if(user>com){
            printf("WIN\n");
            i++;
            continue;
        }
        else 
        {
            printf("LOSE\n");
            printf("%d WINs, %d TIEs\n",i,j);
            break;
        }
    }
}