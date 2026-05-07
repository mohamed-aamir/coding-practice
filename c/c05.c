#include <stdio.h>

int main(){
    int n, cnt=0;
    printf("Enter the number to check for prime (max 9 digit): ");
    scanf("%d", &n);
    if (n<=1)
        printf("The entered number is not a prime\n");
    else {
        for (int i=1; i<=n; i++){
            if (n%i==0)
                cnt++;
            }
            if (cnt>2)
                printf("The entered number is not a prime\n");
            else
                printf("The entered number is a prime\n");
        }
    return 0;
}
