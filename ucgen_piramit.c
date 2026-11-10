#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    printf("kac satirli piramit istersiniz=\t");
    scanf("%d",&z);
     for (x=1;x<=z;x++){
        for(y=1;y<=z-x;y++){
            printf(" ");
            }
        for(y=1;y<=x;y++){
            printf(" *");
        }printf("\n");
     }
    return 0;
}
