#include <stdio.h>
#include <stdlib.h>

int main(){
  int dizi1[10][10],dizi2[10][10],topdizi[10][10],i,j,boyut,islem;
  printf("Uygulamaya hosgeldiniz\nlutfen yapacaginiz islemi seciniz:\n");
  printf("1=matrisleri toplamak\n2=2X2 lik matris determinantini bulmak\n");
  scanf("%d",&islem);
  if(islem==1)
  {
  printf("-------------MATRISLERIN TOPLAMI--------------\n-KURAL=nXn yani kare matris giriniz\n");
  printf("matrisin kaca kac oldugunu giriniz:");
  scanf("%d",&boyut);
  printf("1. matrisin degerlerini giriniz:");
  for(i=0;i<boyut;i++)
      for(j=0;j<boyut;j++)
        scanf("%d",&dizi1[i][j]);
  printf("\n2. matrisin degerlerini giriniz:");

   for(i=0;i<boyut;i++)
      for(j=0;j<boyut;j++)
        scanf("%d",&dizi2[i][j]);
    printf("1. matrisimiz:\n");
    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        printf("%d ",dizi1[i][j]);
        printf("\n");
       }
    printf("\n2. matrisimiz:\n");
    for(i=0;i<boyut;i++)
    {
      for(j=0;j<boyut;j++)
        printf("%d ",dizi2[i][j]);
        printf("\n");
    }
    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            topdizi[i][j]=dizi1[i][j]+dizi2[i][j];
        }

    }
    printf("\ndizilerin toplami:\n");
    for(i=0;i<boyut;i++)
    {
      for(j=0;j<boyut;j++)
        printf("%d ",topdizi[i][j]);
        printf("\n");
    }
    printf("\n------ISLEM BASARILI :D-------");
  }
  else if(islem==2)
  {
      printf("------------2X2 DETERMINANT BULMA-------------");
      printf("\ndizinin elemanlarini giriniz:\n");
      int det;
      for(i=0;i<2;i++)
      {
          for(j=0;j<2;j++)
          {
              scanf("%d",&dizi1[i][j]);
          }
      }
      for(i=0;i<2;i++)
      {
          for(j=0;j<2;j++)
          {
              printf("%d ",dizi1[i][j]);
          }
          printf("\n");
      }
      det=dizi1[0][0]*dizi1[1][1]-dizi1[1][0]*dizi1[0][1];
      printf("determinant=%d",det);
  }


 return 0;

}
