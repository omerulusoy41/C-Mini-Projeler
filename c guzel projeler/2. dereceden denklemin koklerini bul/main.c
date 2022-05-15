#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int kokbul(int a,int b,int c,float *xp1,float *xp2)
{
    int disk=pow(b,2)-(4*a*c);
    *xp1=((-1*b)+sqrt(disk))/(float)(2*a);
    *xp2=((-1*b)-sqrt(disk))/(float)(2*a);

    return disk;
}
int main()
{
    printf("ax^2+bx+c denkleminin koklerini bulan program\n");
    printf("denklemin a,b,c degerlerini giriniz:");
    int a,b,c;
    float delta,x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    delta=kokbul(a,b,c,&x1,&x2);
    if(delta<0)
        printf("denklemin reel koku yoktur!");
    else
        printf("denklemin kokleri x1=%f   x2=%f",x1,x2);
    return 0;
}
