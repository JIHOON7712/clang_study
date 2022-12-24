#include<stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
}Point;

void reverse(Point *ptr){
    int temp;
    temp=ptr->xpos;
    ptr->xpos=ptr->ypos;
    ptr->ypos=temp;
}

int main(void)
{
    Point pos1={2,4};
    Point pos2={5,7};
    reverse(&pos1);
    reverse(&pos2);
    printf("%d %d\n",pos1.xpos,pos1.ypos);
    printf("%d %d\n",pos2.xpos,pos2.ypos);
}