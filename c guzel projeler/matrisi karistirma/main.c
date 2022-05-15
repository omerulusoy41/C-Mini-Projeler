#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int dizi[7][7];
    int i=0,c=1,j;
    srand(time(0));
    for(i=0;i<7;i++)
        for(j=0;j<7;j++){
         dizi[i][j]=c;
         c++;
        }
        printf("     |0|");
   for(i=0;i<6;i++)
    printf(" |%d|",i+1);
   printf("\n");
   for(i=0;i<7;i++){
        printf("[%d]",i);
        for(j=0;j<7;j++)
         printf("%4d",dizi[i][j]);
        printf("\n");
   }
   printf("rastegele dagilmis hali:\n");
      printf("     |0|");
   for(i=0;i<6;i++)
    printf(" |%d|",i+1);
   printf("\n");
   int yedek,a,b;
   for(i=0;i<7;i++)
   {
       printf("[%d]",i);
       for(j=0;j<7;j++)
       {
            a=rand()%7;
            b=rand()%7;
           if(dizi[i][j]!=dizi[a][b])
           {
               if(dizi[a][b]==0)
               {
                   j--;
                   continue;
               }
                printf("%4d",dizi[a][b]);
                dizi[a][b]=0;
           }
           else j--;
       }
     printf("\n");
   }
    return 0;
}
