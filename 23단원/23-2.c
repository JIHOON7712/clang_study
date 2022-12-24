#include<stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

typedef struct rec{
    Point p1;
    Point p2;
}Rec;

int square(Rec rec){
    int squ=(rec.p2.xpos-rec.p1.xpos)*(rec.p1.ypos-rec.p2.ypos);
    return squ;
}

Point* position(Rec rec)
{
    Point pos[4];
    pos[0]=rec.p1;
    pos[3]=rec.p2;
    pos[1].xpos=rec.p1.xpos;
    pos[1].ypos=rec.p2.ypos;
    pos[2].xpos=rec.p2.xpos;
    pos[2].ypos=rec.p1.ypos;
    Point* ptr=pos;
    return ptr;
}

int main(void)
{
    Rec rec={{2,7},{5,2}};
    printf("³ÐÀÌ´Â :%d\n",square(rec));
    for(int i=0;i<4;i++){
        printf("xÁÂÇ¥´Â : %d yÁÂÇ¥´Â : %d\n",(position(rec)+i)->xpos,(position(rec)+i)->ypos);
    }
}