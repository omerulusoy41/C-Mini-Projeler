#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
     printf("bir sayi giriniz;");
     scanf("%d",&n);
     int boyut=n+n-1;
     int dizi[boyut][boyut],i,j,a=0;
    for(int z=0;z<boyut;z++){
     for(i=a;i<boyut-a;i++)
     {
         for(j=a;j<boyut-a;j++)
         {
             dizi[i][j]=n;
         }

     }
     n--;
     a++;
    }







     for(i=0;i<boyut;i++)
     {
         for(j=0;j<boyut;j++)
         {
             printf("%2d ",dizi[i][j]);
         }
         printf("\n");
     }

    return 0;
}
