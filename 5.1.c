#include <stdio.h>

void asalSayiBul(int x){
    int kontrol = 0;

    for(int i=2;i<x;i++){
        if(x%i == 0){
            kontrol++;
            break;
        }
    }

    if(kontrol == 0) {printf("Girilen sayı asaldır");}
    else {printf("Girilen sayı asal değildir!");}
    return;
}
int main()
{
    int x;
    printf("Asallık kontrolü için bir değer girin: ");scanf("%d",&x);
    asalSayiBul(x);

    return 0;
}
