#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str1[]="To be or not to be";
  char str2[]="that is the question.";
  unsigned count=0;                         //stores the string length.

  while(str1[count]!='\0')
    ++count;

  printf("The length of string \"%s\" is %d characters.\n",str1,count);


  count=0;
  while(str2[count]!='\0')
    ++count;
    printf("The length of string \"%s\" is %d characters.\n",str1,count);

  getchar();
    return 0;
}
