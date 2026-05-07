#include <stdio.h>

int main(){
    float a,b,c;
    printf("Multiply 2 floating numbers:\n");
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    c=a*b;
    printf("The result is %f\n", c);
    return 0;
}
