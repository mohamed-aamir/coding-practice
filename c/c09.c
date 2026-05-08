#include <stdio.h>

float fToC (float f){
    return((f-32)*5/9);
}

int main(){
    float f;
    printf("Convert Fahrenheit to Celsius\n");
    printf("Enter the temperature in F: ");
    scanf("%f", &f);
    printf("The temperature in celsius is %f\n", fToC(f));
    return 0;
}
