#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
   int dizi[5][5];
   int i,j,toplam,enk,satir,a,sutun;
   srand(time(0));
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           a=10 +rand()%110;
           dizi[i][j]=a;
       }
   }
   printf("arazinin verimlilikleri:\n");
   for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%4d",dizi[i][j]);
        }
        printf("\n");
    }


   enk=dizi[0][0]+dizi[0][1]+dizi[1][0]+dizi[1][1];
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           toplam=dizi[i][j]+dizi[i][j+1]+dizi[i+1][j]+dizi[i+1][j+1];
           if(toplam<enk)
           {
               enk=toplam;
               satir=i;
               sutun=j;

           }
             printf("toplam=%d\n",toplam);
       }

   }
   printf("evin yapilacagi satir ve sutun numaralari:%d-%d,%d-%d,%d-%d,%d-%d",satir+1,sutun+1,satir+1,sutun+2,satir+2,sutun+1,satir+2,sutun+2);



    return 0;
}
