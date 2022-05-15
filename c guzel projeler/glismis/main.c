#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sayi1,sayi2,sonuc,sayi3;
    char islem;
    int kontrol=0;
    printf("sayi1,sayi2 ve yapacaginiz islemi seciniz:");
     while(1)
     {
         if(kontrol==0)
         {
        scanf("%f%f",&sayi1,&sayi2);
         fflush(stdin);
         scanf("%c",&islem);
             switch(islem)
         {
    case '+':
        sonuc=sayi1+sayi2;
        break;
    case '-':
        sonuc=sayi1-sayi2;
        break;
    case '*':
        sonuc=sayi1*sayi2;
        break;
    case '/':
        sonuc=sayi1/sayi2;
        break;
    case '%':
        sonuc=(int)sayi1%(int)sayi2;
        break;
    case '^':
        sonuc=pow(sayi1,sayi2);
        break;
    default :
        sonuc=sqrt(sonuc);
        break;


    }


         }
         printf("sonuc=%.1f\n",sonuc);
         printf("islem ve sayiyi giriniz(cikmak icin ! basiniz):");
         fflush(stdin);
         scanf("%c",&islem);
         scanf("%f",&sayi3);
         if(islem=='!')break;
         fflush(stdin);
         switch(islem)
         {
    case '+':
        sonuc=sonuc+sayi3;
        break;
    case '-':
        sonuc=sonuc-sayi3;
        break;
    case '*':
        sonuc=sonuc*sayi3;
        break;
    case '/':
        sonuc=sonuc/sayi3;
        break;
    case '%':
        sonuc=(int)sonuc%(int)sayi3;
        break;
    case '^':
        sonuc=pow(sonuc,sayi3);
        break;
    default :
        sonuc=sqrt(sonuc);
        break;


    }

         kontrol++;





     }

    return 0;
}
