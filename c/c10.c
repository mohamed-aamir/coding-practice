#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("The size of int is %lu\n", sizeof(int));
    printf("The size of float is %lu\n", sizeof(float));
    printf("The size of double is %lu\n", sizeof(double));
    printf("The size of char is %lu\n\n", sizeof(char));
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("The length of your name is %lu\n", strlen(name));
    printf("The allocated size of the array is %lu\n", sizeof(name));
    return 0;
}
