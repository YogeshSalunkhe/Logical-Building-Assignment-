//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

#define True 1;
#define False 0;

int cheak_vowel(char ch)
{
  if(ch == 'A'||ch =='a'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'|| ch == 'u')
  {
    return True;
  }
  else
  {
    return False;
  }
}

int main()
{
  char ch = '\0';
  
 typedef int  BOOL; 
 
 BOOL ret = False;
  
  printf("\n\t Enter A Character => ");
  scanf("%c",&ch);
  
  ret =cheakvowel(ch);
  
  if(ret == 1)
  {
    printf("\n\t Enter Character %c Is Vowel",ch);
  }
  else
  {
    printf("\n\t Given Character %c Is Not Vowel",ch);
  }
  
  getch();
  return 0;
}
