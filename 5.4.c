#include<stdio.h>
int main(){
   int sayi,tersSayi;

   printf("\nSayı girin: ");
   scanf("%d",&sayi);

   tersSayi=tersFonk(sayi);
   printf("\nSayının tersi :%d",tersSayi);
   return 0;
}
int toplam=0,bellek;
tersFonk(int sayi){
   if(sayi){
      bellek=sayi%10;
      toplam=toplam*10+bellek;
      tersFonk(sayi/10);
   }
   else
      return toplam;
   return toplam;
}