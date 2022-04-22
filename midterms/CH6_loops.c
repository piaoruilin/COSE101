#include <stdio.h>

/*Q1 Find the factors of the integer inputted.
int main()
{
    int num, i;
    scanf("%d", &num);
    for (i=1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}*/

//Q2 Input integers until a 0, then print the sum, maximum and minimum.
int main()
{
    int num, i=0;
    while(i<9999){
        scanf("%d", &num);
        i++;
    }
    printf("%d", num);
    return 0;
}