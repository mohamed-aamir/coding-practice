#include <stdio.h>

int main(){
    int n, cnt=0;
    printf("Enter a number to find prime (max 9 digits): ");
    scanf("%d", &n);
    if (n<=1)
        printf("The given number is not prime\n");
    else{
        for (int i=2; i*i<=n; i++){
            if (n%i==0)
                cnt++;
            }
        if (cnt>2)
            printf("The given number is not prime\n");
        else
            printf("The given number is prime\n");
        }
    return 0;
}
