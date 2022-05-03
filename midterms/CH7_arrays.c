#include <stdio.h>

/*Q1 Input a value N [2,100] and input N numbers. Find the average and print values bigger than the average.
int main()
{
    int N, num, i;
    scanf("%d", &N);
    int array[N], sum, avg;
    for(i=0; i<N; i++) {
        scanf("%d", &num);
        array[i]=num;
        sum += array[i];
    }
    avg=sum/N;
    for (int j=0; j<N; j++) {
        if (array[j]>avg) printf("%d ", array[j]);
    }
}*/

//[CHECK]!!!Q4 Create a 3 letter hangman game.
int main()  
{  
    char arr[3];
    int i,sum=0;
    for(i=0; i<3; i++){
        scanf("%c", &arr[i]); 
        sum+=arr[i];
    }
    
    char input, ans[3]={"_" "_" "_"};
    int j,n,total;
    
    while(j>0){
        scanf("%c", &input);
        for(int n=0; n<3; n++){
            if(input==arr[n]) {
              ans[n]=input;
              total+=ans[n];
            }
            printf("%c ", ans[n]);
        }
        printf("\n");
        if(sum==total) break;
        else if(j==5) break;
        else j+=1;
    }

    return 0;
}

/*Q15 Print a matrix M x N where user inputs M and N. M>=1, N<=20. Print from 1 from left to right.
int main()
{
    int M, N;

    scanf("%d", &M);
    scanf("%d", &N);

    if (M>=1 && N<=20) {
        int matrix[M][N], n = 0;

        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                n += 1;
                printf("%d\t", matrix[M][N] = n);
            }
        }
        return 0;
    }*/

/*Print diamond for inputted number of rows.
int main()
 {
   int n;

   scanf("%d",&n);

   for(int i=1; i<=n; i++){
     for(int j=i; j<=n; j++){
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++){
       printf("*");
     }
     printf("\n");
   }

   for(int i=n-1; i>=1; i--){
     for(int j=n; j>=i; j--){
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++){
       printf("*");
     }
     printf("\n");
   }

   return 0;
 }*/

/*Print inverse diamond for inputted number of rows.
 int main()
 {
   int n;

   scanf("%d",&n);

   for(int i=1; i<=n; i++){
     for(int j=i; j<=n; j++){
       printf("*");
     }
     for(int k=1; k<2*i-1; k++){
       printf(" ");
     }
     for(int j=i; j<=n; j++){
       printf("*");
     }
     printf("\n");
   }

   for(int i=n-1; i>=1; i--){
     for(int j=n; j>=i; j--){
       printf("*");
     }
     for(int k=1; k<2*i-1; k++){
       printf(" ");
     }
     for(int j=n; j>=i; j--){
       printf("*");
     }
     printf("\n");
   }

   return 0;
 }*/

/*Print diamond patterns for numbers.
  int main()
 {
   int n, a;

   scanf("%d",&n);

   for(int i=1; i<=n; i++){
     a=1;
     for(int j=i; j<=n; j++){
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++){
       printf("%d",a++);
     }
     printf("\n");
   }

   for(int i=n-1; i>=1; i--){
     a=1;
     for(int j=n; j>=i; j--){
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++){
       printf("%d",a++);
     }
     printf("\n");
   }

   return 0;
 }*/

 /*Print possible combinations of value inputted.
 int main()
 {
     int N;
     scanf("%d", &N);
     int x[9],count=1,i,j,k;
     for(int i=0; i<N; i++){
         x[i]=count++;
     }
     for(j=0; j<N; j++){
         for(k=0; k<N; k++){
             printf("%d", x[(j+k)%N]);
         }
         printf("\n");
     }
     
     return 0;
 }*/