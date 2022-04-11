#include<stdio.h>

int main()
{
    int n,i,c,big,big2;
    scanf("%d", &n);
    scanf("%d", &big);
    scanf("%d", &big2);
    if(big2>big) 
    {
        big=big2;
        big2=big;
    }

    if (n>=3 && n<=100)
    {
       for(i=3; i<=n; i++)
        {
            scanf("%d", &c);
            if(c>big) big=c;
            else if(c>big2 && c<big) big2=c;
        }; 
    };

    printf("%d \n%d", big, big2);
    return 0;
}