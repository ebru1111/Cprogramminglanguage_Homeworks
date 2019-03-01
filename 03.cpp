#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
char String[80]; int i; 
int saydir=1;    
int orta;     

int kontrol=0;
for(i=0;i<80;i++)
printf("Kelimeyi Giriniz:");
String[i]='0';
gets(String);
for(i=0;i<80;i++)
{
 if(String[i]!='0')
 saydir++;
 else
 break;
}
if(saydir%2!=0)
{
orta=(saydir)/2;
for(i=1;i<=orta;i++)
{
 if(String[orta-i]==String[orta+i])
 kontrol++;
}
if(kontrol==orta)
printf("Bu Kelime Palindromdur\n");
else
printf("Bu Kelime Palindrom Degildir\n");
}
else
printf("Bu Kelime Palindrom Degildir\n");
 
system("PAUSE");
        return 0;
}
