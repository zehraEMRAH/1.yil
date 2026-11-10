#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,z;

     for(i=1;i<=7;i++){
        for(j=1;j<=15;j++){
            if(j==8 ){
                printf(" ");

            }else if(i==1 && j!=8){
              printf("*");
            }else if(i==2){
               if(j==6 ||j==9){
                printf("*");
               }else{
                 printf(" ");
                 }
            }else if(i==3){
               if(j==5 ||j==9){
                printf("*");
               }else{
                 printf(" ");
               }
            }else if(i==4){
               if(j!=1&&j!=2 && j!=3 &&j!=5 &&j!=6 && j!=7){
                printf("*");
               }else{
                 printf(" ");
               }
            }else if(i==5){
              if(j==3|| j==9){
                printf("*");
              }else{
               printf(" ");
              }
            }else if (i==6){
                if(j==2|| j==9){
                    printf("*");
                }else{
                 printf(" ");
                }
            }else{
              printf("*");
            }

     }printf("\n");
     }
    return 0;
}
