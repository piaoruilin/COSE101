//Input N amount of numbers and output the largest and second largest value, according to conditions.

#include<stdio.h>

int main()
{
    int n,i,c,big,big2,a,b;
    scanf("%d", &n);

    if (n>=3 && n<=100)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        if(b>a || b==a)
        {
            big2=a;
            big=b;
        }
        else 
        {
            big=a;
            big2=b;
        };
        for(i=3; i<=n; i++)
        {
            scanf("%d", &c);
            if(c>big) {
              big2=big;
              big=c;
            };
            if(c>big2 && c<big) big2=c;
        }
    }

    printf("%d\n%d", big, big2);
    return 0;
}