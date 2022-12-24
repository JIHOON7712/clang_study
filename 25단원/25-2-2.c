#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int* ptr=(int *)malloc(5*sizeof(int));
    int i=0,k=0;
    for(;;i++){
        printf("정수를 입력하시오. :");
        scanf("%d",ptr+i);   
        printf("%d\n",*(ptr+i));
        if(*(ptr+i) == (-1)){
            break;
        }
        if(i>=3){
            k++;
            ptr=(int*)realloc(ptr,sizeof(int)*(5+k));
        }
    }
}