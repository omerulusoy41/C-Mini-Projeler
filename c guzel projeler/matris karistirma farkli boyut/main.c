#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
   int dizi[9][9];
   int i,j,a=1;
   srand(time(0));
   for(i=0;i<9;i++)
   {
       for(j=0;j<9;j++)
       {
            if(i==1||i==4||i==7)
            {
                dizi[i][j]=0;
            }
            else
            {
                dizi[i][j]=a;
                a++;
            }
       }
   }
   printf("otopark alani ve siralamasi:\n");
   printf("     [0]");
   for(i=1;i<9;i++)
        printf(" |%d|",i);
    printf("\n");
   for(i=0;i<9;i++)
   {
       printf("[%d]",i);
       for(j=0;j<9;j++)
       {
           printf("%4d",dizi[i][j]);
       }
       printf("\n");
   }
   int b,c,kontrol=0;
  printf("otoparka rastegele dagilis:\n");
  for(i=0;i<9;i++)
  {
      printf("[%d]",i);
      for(j=0;j<9;j++)
      {
          if(i==1||i==4||i==7)
          {
              printf("%4d",dizi[i][j]);
          }
          else{
            b=rand()%9;
            c=rand()%9;
            if(b==1||b==4||b==7){
                    j--;
                    continue;
            }
            if(dizi[i][j]!=dizi[b][c])
               {
                   if(dizi[b][c]==0)
                   {
                       j--;
                       continue;
                   }
                   printf("%4d",dizi[b][c]);
                   dizi[b][c]=0;
               }
           else
            j--;

          }

      }
      printf("\n");

  }
    return 0;
}
