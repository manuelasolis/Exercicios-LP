#include <stdio.h>
int main (){
    float v1, v2;

    printf("v1: ");
    scanf(%f,&v1);
    prinft("v2: ");
    scanf(%f,&v2);

    while (v2==0){
        printf ("v2: ");
        scanf (%f,&v2);
    }

    prinft ("%.1f / %1f = %1.f. \v",v1,v2,v1/v2);
}
