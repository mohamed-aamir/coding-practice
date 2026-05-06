#include <stdio.h>

/* need to include & before the variable in scanf for address pointing
learn more about it when learning memory pointers */

int main(){
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);
    printf("The entered number is %d.\n", num);
    return 0;
}
