#include <stdio.h>

int main(){
    int a,b,t;
    printf("Enter the numbers to swap:\n");
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
/*------Operation------*/
    t=a;
    a=b;
    b=t;
    printf("The numbers are swapped:\n");
    printf("A = %d, B = %d\n", a, b);
    return 0;
}
