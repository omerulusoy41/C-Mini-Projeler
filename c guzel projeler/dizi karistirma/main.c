#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10]={1,2,3,4,5,6,7,8,9,10},i,a;
    srand(time(0));
    for(i=0;i<10;i++)
    {
        a=rand()%10;
        if(dizi[i]!=dizi[a])
        {

            if(dizi[a]==0)
            {
                i--;
                continue;
            }
           printf("%d ",dizi[a]);
           dizi[a]=0;

        }
        else
            i--;
    }
    return 0;
}
