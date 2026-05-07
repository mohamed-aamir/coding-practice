#include <stdio.h>

/*
The maximum value for int is 2147483647
The maximum value for long int is 9223372036854775807 (mac and linux) and 2147483647 (windows)
The maximum value for long long int is 9223372036854775807

%d for int, %ld for long int and %lld for long long int
*/

int main(){
    int cnt=0;
    int n;
    printf("Enter the number to check for prime (max 9 digit): ");
    scanf("%d", &n);
    if (n<=1)
        printf("Entered number is not a prime\n");
    else {
        for (int i=1; i<=n; i++){
            if (n%i==0){
                printf("root=%d\n", i);
                cnt++;
                }
            }
            if (cnt>2)
                printf("The entered number is not a prime\n");
            else
                printf("The entered number is a prime\n");
        }
    return 0;
}
