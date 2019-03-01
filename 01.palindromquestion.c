#include <stdio.h>
#include <string.h>

void palindromeKontrol(char* string) 
{ 
    char *p, *yeni; 
  
    p = string; 
  
    while (*p != 0) { 
        ++p; 
    } 
    --p; 
  
    for (yeni = string; p >= yeni;) { 
        if (*p == *yeni) { 
            --p; 
            yeni++; 
        } 
        else
            break; 
    } 
  
    if (yeni > p) 
        printf("%s bir Palindrome'dur", string);
    else
        printf("%s Palindrome değildir!", string); 
} 
  
int main() 
{ 
    char girilen[100];
    
    printf("Palindrome kontrolü için bir şey girin= ");
    scanf("%s", &girilen);
  
    palindromeKontrol(girilen); 
  
    return 0; 
} 
