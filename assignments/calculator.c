//Write a program that does addition, subtraction, multiplication and division for two integers in order. add, sub, mul, div.

#include <stdio.h>
#include <string.h>
 
void menu();
int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);
 
int main() {
    menu();
    return 0;
}
 
void menu() {
    char ch[10];
    int num1, num2, result;
    scanf("%s %d %d", ch, &num1, &num2);
 
    if(!strcmp(ch, "add"))
        result = add(num1, num2);
    else if(!strcmp(ch, "sub"))
        result = sub(num1, num2);
    else if(!strcmp(ch, "mul"))
        result = mul(num1, num2);
    else if(!strcmp(ch, "div"))
        result = div(num1, num2);
    printf("%d \n", result);
}
int add(int n1, int n2) {
    return (n1+n2);
}
int sub(int n1, int n2) {
    return (n1-n2); 
}
int mul(int n1, int n2) {
    return (n1*n2);
}
int div(int n1, int n2) {
    return (n1/n2);
}