#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sifre;
    char email[100];
    int y,z,t;
    char x[100];
    int girishakki=3;

    printf("github'a hos geldiniz\n");
    printf("Yoksa daha kaydolmadiniz mi?\n");
    printf("giris yapmak icin 2'yi tuslayin.\n");
     while (girishakki>0){
      --girishakki;
        printf("kaydolmak icin 1'i tuslayin.\n");
        scanf("%d",&z);

      switch(z){
       case 1:
          printf("oncelikle aramiza hos geldiniz.\n");
          printf("sifre olusturun(sayisal parola kullaniniz.)=\n");
          scanf("%d",&y);
          printf("Simdi e mail adresinizi yaziniz=\n");
          scanf(" %99s",&x);
          printf("bitirmek icin 1'i tuslayin.\n");
          printf("islemi iptal etmek icin 0'i tuslayin.\n");
          scanf("%d",&t);

           if(t==1){
            printf("bilgileriniz kaydedildi simdi giris yapiniz.\n");
              printf("Github'a hos geldiniz.\n");
              printf("e mail'inizi girin=\n");
              scanf ("%99s",&email);
              if(strcmp(x,email)==0){
                printf("sifre girin=\n");
                scanf("%d",&sifre);
                   if( y==sifre){
                     printf("giris basarili.\n");
                     return 0;
                     }else{
                       printf("girdiginiz bilgiler uyusmamakta tekrar deneme hakki %d\n",girishakki);
                      continue;
                     }
             }else{
                printf("girdiginiz bilgiler uyusmamakta tekrar deneme hakki %d\n",girishakki);
                continue;
            }
           }else if(t==0){
               printf("islem iptal edildi.\n");
               return 0;

           }
       case 2:
         printf("uye bilgilerinizi girin.\n");
         printf("e mail adresinizi girin.\n");
         scanf("%99s",&email);
         printf("sifrenizi girin=\n");
         scanf("%d",sifre);
         printf("giris basarili.");
         return 0;
       }
      }

    return 0;
}
