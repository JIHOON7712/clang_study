#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int* ptr=(int *)malloc(5*sizeof(int));
    int i=0,k=0;
    for(;;i++){
        printf("������ �Է��Ͻÿ�. :");
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