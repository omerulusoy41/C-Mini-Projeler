#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#include <conio.h>
struct sehir
{
    char isim[20];
    int konum_x;
    int konum_y;
};
struct araba{
   char marka[20];
   int max_hiz;
   float konum;
};
void BilgiAl(struct sehir *list,int kisi)
{
    int i;
    printf("----------------\n");
    for(i=0;i<kisi;i++)
    {
        printf("\n\n%d. sehrin adini giriniz:",i+1);
        scanf("%s",list[i].isim);
        fflush(stdin);
        printf("%d. sehrin x konumunu giriniz:",i+1);
        scanf("%d",&list[i].konum_x);
        fflush(stdin);
        printf("%d. sehrin y konumunu giriniz:",i+1);
        scanf("%d",&list[i].konum_y);
        fflush(stdin);
    }
}
void ArabaBilgi(struct araba *arabalar,int boyut)
{
    int i;
    for(i=0;i<boyut;i++)
    {
        printf("\n\n%d. arabanin markasini giriniz:",i+1);
        scanf("%s",arabalar[i].marka);
        fflush(stdin);
        printf("%d. arabanin max hizini giriniz:",i+1);
        scanf("%d",&arabalar[i].max_hiz);
        fflush(stdin);
        arabalar[i].konum=0;
    }
}
void YarisSimulasyonu(struct araba *arabalar,float uzaklik,int boyut)
{
    int i=0;
    float ortalama_hiz;
    int kontrol=0;
    struct araba kazanan;
    while(1)
    {
        printf("\n\n-------%d.adim--------\n",i+1);
        for(int j=0;j<boyut;j++)
        {
            int yedek=arabalar[j].max_hiz;
            float aralik1=(yedek*3)/4;
            ortalama_hiz=aralik1+rand()%yedek;
            arabalar[j].konum+=ortalama_hiz;
            printf("%d . araba --> konum:%f(+%f)\n",j+1,arabalar[j].konum,ortalama_hiz);
            if(arabalar[j].konum>=uzaklik)
            {
                kontrol=1;
                kazanan=arabalar[j];
            }
        }
        if(kontrol==1)
            break;
       i++;
    }
    printf("\n\n-------SIMULASYON BITTI-------");
    printf("\n-----------Kazanan Araba----------\nmarka=%s\nmax_hizi=%d\nkonumu=%f",kazanan.marka,kazanan.max_hiz,kazanan.konum);
}
int main()
{
    srand(time(NULL));
    int SehirSayisi,ArabaSayisi;
    printf("sehir sayisini giriniz:");
    scanf("%d",&SehirSayisi);
    struct sehir liste[SehirSayisi];
    BilgiAl(liste,SehirSayisi);
    printf("\n---------------------\n");
    printf("araba sayisini giriniz:");
    scanf("%d",&ArabaSayisi);
    struct araba arabalar[ArabaSayisi];
    ArabaBilgi(arabalar,ArabaSayisi);
    char baslangic[20],hedef[20];
    int x1=0,x2=0;
    while(1)
    {
        printf("\nBaslangic sehrini giriniz:");
        scanf("%s",baslangic);
        fflush(stdin);
        printf("\nhedef sehri giriniz:");
        scanf("%s",hedef);
        fflush(stdin);
        x1=0,x2=0;
        for(int i=0;i<SehirSayisi;i++)
        {
            if(strcmp(baslangic,liste[i].isim)==0)
                x1=i;
            if(strcmp(hedef,liste[i].isim)==0)
                x2=i;
        }
        if(x1==0&&x2==0)
            printf("hata!!\n");
        else break;
    }
    float uzaklik=sqrt(pow(((liste[x1].konum_x)-(liste[x2].konum_x)),2)+pow(((liste[x1].konum_y)-(liste[x2].konum_y)),2));
    printf("\n\niki sehir arasi uzaklik:%f",uzaklik);
    printf("\n!!!------------------------- Simulasyon Basliyor ------------------------!!\n");
    YarisSimulasyonu(arabalar,uzaklik,ArabaSayisi);
    getch();
    return 0;
}
