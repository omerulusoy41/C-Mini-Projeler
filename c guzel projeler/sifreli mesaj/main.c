#include <stdio.h>
#include <stdlib.h>

int main()
{
   char matris[4][5]={'A','B','C','D','E','F','G','H','J','K','L','M','N','O','P','R','S','T','U',' '};
   int i,j;
   printf("  1 2 3 4 5\n  ---------\n");
   for(i=0;i<4;i++)
   {
       printf("%d|",i+1);
       for(j=0;j<5;j++)
        printf("%c ",matris[i][j]);
       printf("\n");
   }
   printf("iki basamakli sayilar giriniz(cikmak icin 0):");
  int dizi[20],a=0;
   while(1)
   {
       scanf("%d",&dizi[a]);
       if(dizi[a]==0)
        break;
       a++;
   }
   for(i=0;i<a;i++)
   {
    int x,y;
    x=(dizi[i]/10)-1;
    y=(dizi[i]%10)-1;
    printf("%c",matris[x][y]);
   }

    return 0;
}
