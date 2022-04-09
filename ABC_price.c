#include <stdio.h>

int main()
{
    int num, A=900, B=750, C=200;
    scanf("%d", &num);
    
    while(num%A!=0) {
        printf("%d", num);
        num+=1;
    }
    
    //at least one
    
    //B is always even
    
    //C<A or C<B
    return 0;
}