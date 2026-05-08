#include <stdio.h>

int main(){
    double a,b,c;
    int n;
    printf("Multiply 2 floating numbers:\n");
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("No. of digits accurate: ");
    scanf("%d", &n);
    c=a*b;
    printf("The result is %.*lf\n", n, c);
    return 0;
}
