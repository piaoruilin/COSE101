//Input N amount of numbers and output the largest and second largest value.

#include <stdio.h>

int main()
{
    int N = 0, fMax, ScMax, num;
    fMax = ScMax;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        scanf("%d",&num);
        if(num>fMax)
        {
            ScMax = fMax;
            fMax = num;
        }
        else if(num<fMax && num>ScMax)
            ScMax = num;
    }
printf("%d",fMax);
printf("\n%d",ScMax);
return 0;
}