#include <stdio.h>

int x(int i){
    
    if (i == 0)
        return 0;
    return ( i%10 + x(i/10));
}

int main()
{
    int y;
    
    printf("Lütfen bir sayı giriniz =  ");scanf("%d",&y);
    
    printf("Girilen sayının basamakları toplamı = %d", x(y));

    return 0;
}
