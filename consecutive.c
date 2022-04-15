//Input a N number of characters and integers. Output the longest consecutive characters and integers, according to conditions.

#include <stdio.h>

int main(){
    int n, check = 0;
    int maxchar = 0, maxint = 0, count = 0;
    char input;     // 1-숫자 2-문자
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++){
        scanf("%c", &input);
        
        if (input >= '0' && input <= '9'){
            if (check == 0 || check == 1){
                check = 1;
                count += 1;
            }
            else if (check == 2){
                maxchar = maxchar < count ? count : maxchar;
                check = 1;
                count = 1;
            }
        }
        else if (input >= 'a' && input <= 'z'){
            if (check == 0 || check == 2){
                check = 2;
                count += 1;
            }
            else if (check == 1){
                maxint = maxint < count ? count : maxint;
                check = 2;
                count = 1;
            }
        }
    }
    if (check == 1)
        maxint = maxint < count ? count : maxint;
    else if (check == 2)
        maxchar = maxchar < count ? count : maxchar;
        
    printf("%d\n%d", maxchar, maxint);

    return 0;
}