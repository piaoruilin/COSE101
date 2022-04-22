#include <stdio.h>

/*Q1 Output temperature conditions.
int main()
{
    int n;
    scanf("%d", &n);
    if(n<0) printf("cold, indoor");
    else if(n>=0 && n<40) printf("moderate, outdoor");
    else printf("hot, indoor");
    return 0;
}*/

/*Q2 Determine whether 2 integers are square numbers of each other. If not, print "none".
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    if(N*N==M) printf("%d*%d=%d", N, N, M);
    else if(M*M==N) printf("%d*%d=%d", M, M, N);
    else printf("none");
    return 0;
}*/

/*Q3 Input 5 integers and print sum of only the positive integers.
int main()
{
    int n,sum=0;
    for(int i=5; i>0; i=i-1) {
        scanf("%d", &n);
        if(n>0) sum=sum+n;
    }
    printf("%d", sum);
    return 0;
}*/

/*Q4 Change lowercase to uppercase and vice versa. Print none if error is inputed.
int main()
{
    char ch;
    int diff = 'A'-'a';
    scanf("%c", &ch);
    if (ch>='a' && ch<='z') printf("%c", ch+=diff);
    else if (ch>='A' && ch<='Z') printf("%c", ch-=diff);
    else printf("none");

    return 0;
}*/

/*!!![CHECK] Q6 Print the max and min of a set of 3 integers.
int main()
{
    int min=0, max=0;
    char arr[1000];
    int n=sizeof(arr);
    for (int i=0; i<n; i++){
        if (i==0){
            min=arr[i];
            max=arr[i];
        }
        else{
            if(arr[i]<min)
                min=arr[i];
            if(arr[i]>max)
                max=arr[i];
        }
    }
    return 0;
}*/

/*Q9 Input 2 dates and output the earlier one. If both are the same, output a * next to the date.
int main(){
    int year, month, day, year1, month1, day1;
    scanf("%04d/%02d/%02d", &year, &month, &day);
    scanf("%04d/%02d/%02d", &year1, &month1, &day1);
    
    if (year1>year) printf("%04d/%02d/%02d", year, month, day);
    else if (year1>year && month1>month) printf("%04d/%02d/%02d", year, month, day);
    else if (year1>year && month1>month && day1>day) printf("%04d/%02d/%02d", year, month, day);
    else if (year1==year && month1==month && day1==day) printf("%04d/%02d/%02d%s", year, month, day, "*");
    else printf("%04d/%02d/%02d", year1, month1, day1);

    return 0;
}*/

/*Q10 Calculate and grade the class average.
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
}*/

/*!!![CHECK] Q11 Compare 3 integers and print out S for correct value and position; B for correct value only.
int main()
{
    int arr[3], arr1[3];
    for(int i=0;i<3;++i){
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<3;++j){
        scanf("%d", &arr[j]);
    }
    int S=0, B=0;
    for(int k=0; k<2; ++k){
        if(arr[k]==arr1[k]) S=S+1;
    }
    printf("%dS%dB", S,B);
    return 0;
}*/

//Q12 Drinks: Americano(500), Cafe Latte(400), Lemon Tea(300). Output number of 500s and 100s for the change.
int main()
{
    
}