#include <stdio.h>

// need to define the variable before calling/using it in scanf/printf

int main(){
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);
    return 0;
}