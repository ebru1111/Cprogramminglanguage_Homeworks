#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int faktoriyel(int a[][]){
    int sonuc = 1;
    for(int i=1;i<=a;i++){
        sonuc=sonuc*i;
    }
    return sonuc;
}

int main(){
    int a,b,i,j;
    srand(time(NULL));
    a=1+rand()%7;
    b=1+rand()%7;
    int m[a][b];
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            m[i][j]=1+rand()%7;
            printf("%d!\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------------------------------\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            int x = m[i][j];
            printf("%d\t",faktoriyel(x));
        }
        printf("\n");
    }
    
    return 0;
}


