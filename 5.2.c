#include <stdio.h>

int fibonacciBul(int x){
    if ( x == 0 || x == 1 )
        return x;
    else
        return (fibonacciBul(x-1) + fibonacciBul(x-2));
}

int main()
{
    int x, j = 0;
    printf("Fibonacci serisi için değer gir= ");scanf("%d",&x);
    
    for(int i=1; i<=x; i++){
        printf("%d ",fibonacciBul(j));
        j++;
    }

    return 0;
}
