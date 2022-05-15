#include <stdio.h>
#include <stdlib.h>

int main(){
  int dizi[10]={1,2,3,4,5,6,7,8,9,10},i,yedek,donme,yedek2;
  int indboyut=9;
  printf("kac kere donmesini istersiniz:");
  scanf("%d",&donme);
  for(i=0;i<donme;i++)
    {
        yedek=dizi[indboyut-1];
        dizi[indboyut-1]=dizi[indboyut];
        yedek2=dizi[indboyut-2];
        dizi[indboyut-2]=yedek;
        yedek=dizi[indboyut-3];
        dizi[indboyut-3]=yedek2;
        yedek2=dizi[indboyut-4];
        dizi[indboyut-4]=yedek;
        yedek=dizi[indboyut-5];
        dizi[indboyut-5]=yedek2;
        yedek2=dizi[indboyut-6];
        dizi[indboyut-6]=yedek;
        yedek=dizi[indboyut-7];
        dizi[indboyut-7]=yedek2;
        yedek2=dizi[indboyut-8];
        dizi[indboyut-8]=yedek;
        yedek=dizi[indboyut-9];
        dizi[indboyut-9]=yedek2;
        dizi[indboyut]=yedek;

    }
    printf("\ndizinin saat yonunde %d tur donmus hali:\n");
    for(i=0;i<10;i++)
        printf("%d ",dizi[i]);




 return 0;

}
