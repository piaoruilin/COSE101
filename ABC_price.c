//Output the combinations of items bought with N.

#include <stdio.h>

int main()
{
    int num,A,B,C,i=0;
    scanf("%d", &num);
    
    for(A=900; A<num; A+=900)
    for(B=750; B<num; B+=750)
    for(C=200; C<=num; C+=200) {
        if(A+B+C==num) {
            int Anew=A/900, Bnew=B/750, Cnew=C/200;
            if((Cnew<Anew || Cnew<Bnew) && Bnew%2==0) {
                printf("%d %d %d\n", Anew, Bnew, Cnew);
                i+=1;
            }
        }
    }
    if(i==0) printf("none");
    return 0;
}