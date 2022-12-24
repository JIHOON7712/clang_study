#include<stdio.h>

void div(int);
int* odd(int);
int* even(int);

int main(void)
{
    int a[10];
    printf("Insert the number:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        div(a[i]);
    }
    printf("odd number:");
    for(int i=0;i<5;i++)
        printf("%d  ",*(odd(0)+i));
    printf("\n");
    printf("even number :");
    for(int j=0;j<5;j++)
        printf("%d ",*(even(0)+j));    
}

void div(int i)
{
    if(i%2==0)
        even(i);
    else
        odd(i);
}

int* odd(int i)
{
    static int odd[5];
    static int p=0;
    if(i==0){
        return odd;
    }
    
    odd[p]=i;
    p++;
    return odd;
}

int* even(int i)
{
    static int even[5];
    static int q=0;
    if(i==0){
        return even;
    }
    
    even[q]=i;
    q++;
    return even;
}




