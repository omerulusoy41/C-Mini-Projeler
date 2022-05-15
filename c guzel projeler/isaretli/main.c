#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={1,2,3,4,5,6,7,8,9,1};
    int i,sayac=0,j,kontrol=0;
    for(i=0;i<10;i++)
    {
        int a=i-1;
        while(a>=0)
        {
            if(dizi[i]==dizi[a])
            {
                kontrol=1;
            }
            a--;
        }
        if(kontrol==1)
            continue;


         for(j=0;j<10;j++)
        {
            if(dizi[i]==dizi[j])
            {
                sayac++;
            }
        }
        printf("%d saysindan %d tane vardir.\n",dizi[i],sayac);
        sayac=0;


    }

    return 0;
}
