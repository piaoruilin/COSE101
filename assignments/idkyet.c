#include <stdio.h>
#include <string.h>

int main() {
  char str1[100] = {0};
  char str2[100] = {0};
  char *p = str1, *q = str1;
  int cnt = 0;
  
  fgets(str1, sizeof(str1), stdin);
  str1[strlen(str1) - 1] = '\0';
  scanf("%s", str2);
  
  while(*p) {
      if(*p == ' ') {
          *p = '\0';
          printf("%s\n", q);
          if(!strcmp(q, str2)) cnt++;
          q = q + strlen(q) + 1;
      }
      *p++;
  }
  printf("%s\n", q);
  if(!strcmp(q, str2)) cnt++;
  printf("%d", cnt);
  
  return 0;
}