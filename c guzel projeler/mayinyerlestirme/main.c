#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    char tarla[8][8];
    int i,j,ind1,ind2,sayitut[9],kontrol=0;
    srand(time(0));
    sayitut[0]=rand()%64;
    for(i=1;i<9;i++)
    {
        sayitut[i]=rand()%64;
        int gecici=i-1;
        kontrol=0;
        while(gecici>=0)
        {
            if(sayitut[i]==sayitut[gecici])
            {
                kontrol=1;
                break;
            }
            gecici--;
        }
        if(kontrol==1)
            i--;
    }
    for(j=0;j<8;j++)
        for(i=0;i<8;i++)
          tarla[j][i]='-';
    for(i=0;i<9;i++)
    {
        ind1=(sayitut[i]/8)-1;
        ind2=(sayitut[i]%8)-1;
        if(sayitut[i]<8)
            ind1=sayitut[i]-1;
        if(sayitut[i]%8==0)
            ind2=0;
        tarla[ind1][ind2]='*';

    }
    printf("  0 1 2 3 4 5 6 7\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
        {
            printf("%c ",tarla[i][j]);
        }
        printf("\n");
    }
    return 0;
}
