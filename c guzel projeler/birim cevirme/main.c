#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ilk,son;
    char birim1[5],birim2[5];
    printf("ilk degeri giriniz:");
    scanf("%f",&ilk);
    printf("birimi:");
    fflush(stdin);
    scanf("%s",birim1);
    printf("cevrilecek birimi giriniz:");
    scanf("%s",birim2);
    printf("cevirme islemi:");
    if(strcmp(birim1,"km")==0)
    {
        if(strcmp(birim2,"mm")==0)
            son=ilk*pow(10,6);
        else if(strcmp(birim2,"cm")==0)
            son=ilk*pow(10,5);
        else if(strcmp(birim2,"m")==0)
            son=ilk*pow(10,3);
    }
    else if(strcmp(birim1,"m")==0)
    {
        if(strcmp(birim2,"mm")==0)
            son=ilk*pow(10,3);
        else if(strcmp(birim2,"cm")==0)
            son=ilk*pow(10,2);
        else if(strcmp(birim2,"km")==0)
            son=ilk/1000;
    }
     if(strcmp(birim1,"cm")==0)
    {
        if(strcmp(birim2,"mm")==0)
            son=ilk*10;
        else if(strcmp(birim2,"km")==0)
            son=ilk/10000;
        else if(strcmp(birim2,"m")==0)
            son=ilk/100;
    }
     if(strcmp(birim1,"mm")==0)
    {
        if(strcmp(birim2,"cm")==0)
            son=ilk/10;
        else if(strcmp(birim2,"m")==0)
            son=ilk/1000;
        else if(strcmp(birim2,"km")==0)
            son=ilk/1000000;
    }
    printf("\n%f%s = %f%s",ilk,birim1,son,birim2);
    return 0;
}
