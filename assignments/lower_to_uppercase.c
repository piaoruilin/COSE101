//Change lowercase to uppercase and vice versa. Print none is error is inputed.

#include <stdio.h>

int main()
{
    char ch;
  	int diff = 'A'-'a';
  
    scanf("%c", &ch);
    
    if (ch>='a' && ch<='z') printf("%c", ch+=diff);
  	else if (ch>='A' && ch<='Z') printf("%c", ch-=diff);
  	else printf("none");
  
    return 0;
}