//Calculate and grade the class average.

#include <stdio.h>

int main()
{
    float kor, eng, math;
    scanf("%f %f %f", &kor, &eng, &math);
    float avg = (kor+eng+math)/3;
    
    if (avg>=91.5) printf("A");
    else if (avg>=85.5 && avg<91.5) printf("B");
    else if (avg>=80.5 && avg<85.5) printf("C");
    else printf("F");
    
    if (kor==100 || eng==100||math==100) printf("Good");
    if (kor<60||eng<60||math<60) printf("Bad");
    
    return 0;
}