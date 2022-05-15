#include <stdio.h>
#include <stdlib.h>
/*struct ogrenci{
  char ad[20];
  char soyad[20];
  float ort;
};
int main()
{
    struct ogrenci ogrenciler[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d. ogrencinin adini soyadini ortalamasini giriniz:\n",i+1);
        fgets(&ogrenciler[i].ad,20,stdin);
        ogrenciler[i].ad[strlen(ogrenciler[i].ad)-1]='\0';
        fflush(stdin);
        scanf("%s",ogrenciler[i].soyad);
        fflush(stdin);
        scanf("%f",&ogrenciler[i].ort);
        fflush(stdin);
    }
    printf("\nORTALAMASI BUYUKTEN KUCUGE-----\n");
    for(i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(ogrenciler[j+1].ort>ogrenciler[j].ort)
            {
                char tmp1[20],tmp2[20];
                float yedek=ogrenciler[j].ort;
                ogrenciler[j].ort=ogrenciler[j+1].ort;
                ogrenciler[j+1].ort=yedek;
                strcpy(tmp1,ogrenciler[j].ad);
                strcpy(ogrenciler[j].ad,ogrenciler[j+1].ad);
                strcpy(ogrenciler[j+1].ad,tmp1);
                strcpy(tmp1,ogrenciler[j].soyad);
                strcpy(ogrenciler[j].soyad,ogrenciler[j+1].soyad);
                strcpy(ogrenciler[j+1].soyad,tmp1);
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%s %s %f\n",ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].ort);
    }

    return 0;
}
*/
struct ogrenci{
    char ad[20];
    char soyad[20];
    float ort;
};
int main()
{
    struct ogrenci ogrenciler[10];
    int i;
    printf("ogrencilerin adini soyadini ortalamasini giriniz:\n");
    for(i=0;i<10;i++)
    {
       printf("%d. ogrencinin adini soyadini ortalamasini giriniz:\n",i+1);
       fgets(&ogrenciler[i].ad,20,stdin);
       ogrenciler[i].ad[strlen(ogrenciler[i].ad)-1]='\0';
       fflush(stdin);
       scanf("%s",&ogrenciler[i].soyad);
       fflush(stdin);
       scanf("%f",&ogrenciler[i].ort);
       fflush(stdin);
    }
    for(i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(strcmp(ogrenciler[j+1].soyad,ogrenciler[j].soyad)<0)
            {
                char tmp1[20];
                float yedekort;
                strcpy(tmp1,ogrenciler[j].soyad);
                strcpy(ogrenciler[j].soyad,ogrenciler[j+1].soyad);
                strcpy(ogrenciler[j+1].soyad,tmp1);
                strcpy(tmp1,ogrenciler[j].ad);
                strcpy(ogrenciler[j].ad,ogrenciler[j+1].ad);
                strcpy(ogrenciler[j+1].ad,tmp1);
                yedekort=ogrenciler[j].ort;
                ogrenciler[j].ort=ogrenciler[j+1].ort;
                ogrenciler[j+1].ort=yedekort;
            }



        }
    }
    printf("\n---------SOYADA GORE ALFABETIK SIRALI----------\n");
    for(i=0;i<10;i++)
    {
        printf("%s %s %.1f\n",ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].ort);
    }



    return 0;
}
