#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[8][8];
    int i,j,x,y,hareket;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            dizi[i][j]='-';
    }
     for(i=0;i<8;i++){
        for(j=0;j<8;j++)
           printf("%c ",dizi[i][j]);
      printf("\n");
    }
    printf("ROBOTUN BASLANGIC KONUMUNU GIRINIZ:");
    scanf("%d%d",&x,&y);
    dizi[x-1][y-1]='B';
    printf("hareket komutlarini giriniz:\n1=sag 2=sol 3=asagi 4=yukari (sonlandirmak icin 0 giriniz ):");
    while(1)
    {
        if(x>8)
            x=8;
        else if(x<0)
            x=0;
        if(y>8)
            y=8;
        else if(y<0)
            y=0;
        scanf("%d",&hareket);
        if(hareket==0)
            break;
        else if(hareket>4)
            continue;
        else if(hareket==1&&x<=8&&y<8&&x>0&&y>=0)
        {
            dizi[x-1][y]='1';
            y++;
        }
         else if(hareket==2&&x<=8&&y<=8&&x>=1&&y>=2)
        {
            dizi[x-1][y-2]='1';
            y--;
        }
         else if(hareket==3&&x<8&&y<=8&&x>=0&&y>=1)
        {
            dizi[x][y-1]='1';
            x++;
        }
         else if(hareket==4&&x<=8&&y<=8&&x>=2&&y>=1)
        {
            dizi[x-2][y-1]='1';
            x--;
        }

    }
    printf("robotun hareketi:\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++)
           printf("%c ",dizi[i][j]);
      printf("\n");
    }
    return 0;
}
