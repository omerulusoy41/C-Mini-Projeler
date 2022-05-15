#include <stdio.h>
#include <stdlib.h>
void torpille(int *pd,int boyut,int x,int y)
{
    int yedek3=*(pd+x-1);
   int yedek1=*(pd+y-1);
   *(pd+y-1)=0;
   int yedek2;
   yedek2=*(pd+y);
   *(pd+y)=yedek1;
   for(int j=y;j<x-1;j++)
   {
       yedek1=*(pd+j+1);
       *(pd+j+1)=yedek2;
       yedek2=yedek1;
   }
  *(pd+y-1)=yedek3;

}
int main()
{
   int dizi[9]={1,2,3,4,5,6,7,8,9};
   int i,a,b;
   for(i=0;i<9;i++)
    printf("%d ",dizi[i]);
   printf("\nkacinci siradaki elemani kacinci siraya alalim:");
   scanf("%d%d",&a,&b);
   torpille(dizi,9,a,b);
   for(i=0;i<9;i++)
    printf("%d ",dizi[i]);
    return 0;
}
