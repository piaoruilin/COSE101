//Round up a 5 digit number to the nearest 100.

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    int det = a %1000;
    
    if (det>=500) printf("%d", a-det+1000);
    else if (det<500) printf("%d", a-det);
    
    return 0;
}