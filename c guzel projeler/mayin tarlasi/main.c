#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

int main()
{
    int dizi[10][10],i,j,kontrol=1,a=1;
    srand(time(NULL));
    printf("---MAYIN TARLASI OYUNUNA HOS GELDINIZ---\n**KURAL=EGER 3 SECIMI DOGRU YAPARSAN KAZANIRSIN\n**KURAL2=VERDIGIN KOORDINATLARI ASLA UNUTMA BENDEN SOYLEMESI :D\n");
    printf("(NOT)= KOORDINATLARIN O-O NOKTASINDAN BASLADIGINI UNUTMAYINIZ!!\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {

            if(i%2==0&&j%2==0)
            {
                dizi[i][j]=0;
            }
            else dizi[i][j]=rand()%2;
        }

    }

    while(kontrol==1)
    {
        for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("- ");
        }
        printf("\n");
    }
        int x,y;
        printf("koordinat sencniz(x-y(9-9 arasindan))\n");
        scanf("%d%d",&x,&y);
        if(dizi[x][y]==1)
        kontrol=0;
        else{
            printf("\n%d.secim dogru devam\n",a);
            a++;

        }
         for(i=0;i<10;i++)
            {
            for(j=0;j<10;j++)
              {
                  if(x==i&&y==j)
                     printf("%d ",dizi[x][y]);

                    else
                  printf("- ");
              }
              printf("\n");

            }
            sleep(5);
            system("cls");
            if(a==4)
            {
                printf("kazandiniz tebrikler");
                return;
            }
    }
    printf("\nkaybettiniz!!!");


    return 0;
}
