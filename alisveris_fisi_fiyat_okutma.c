#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    int y=0;
    float z;
    float toplam;
    printf("bizi tercih ettiginiz icin tesekkur ederiz\n");
    printf("*********************\n");
    do{
        printf("urunun fiyatini girin(bitirmek icin 0 girin)=\n");
        scanf("%f",&x);
        printf("%f\n",x);
       if(x<0){
        printf("gecersiz fiyat\n");
         continue;
       }
       toplam+=x;
        y++;


    }while(x!=0);
      if(toplam>500){
       z=toplam*0.1;
       printf("urun sayisi=%d\n",y-1);
       printf("toplam fiyat=%.2f\n",toplam);
       printf("yapilan indirim=%.2f\n",z);
       printf("odenecek tutar=%.2f\n",toplam-z);
     }else{
      printf("urun sayisi=%d\n",y-1);
      printf("indirim uygulanmadi\n");
      printf("odenecek tutar=%.2f\n",toplam);
     }

    return 0;
}
