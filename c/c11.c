#include <stdio.h>

typedef struct complexNumber{
    int real;
    int img;
} complex;

complex add(complex x, complex y){
    complex add;
    
    add.real=x.real+y.real;
    add.img=x.img+y.img;

    return(add);
}

int main(){
    complex a,b,sum;

    printf("Adding two complex numbers\n\n");
    printf("Enter the first complex number:\n");
    printf("real part = ");
    scanf("%d", &a.real);
    printf("imaginary part = ");
    scanf("%d", &a.img);
    printf("The first complex number is %d + %di\n", a.real, a.img);

    printf("\nEnter the second complex number:\n");
    printf("real part = ");
    scanf("%d", &b.real);
    printf("imaginary part = ");
    scanf("%d", &b.img);
    printf("The second complex number is %d + %di\n\n", b.real, b.img);

    sum = add(a,b);
    printf("The sum of the two complex numbers is %d + %di", sum.real, sum.img);

    return 0;
}