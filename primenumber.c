#include <stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0, 1, and negative numbers are not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 up to the square root of n
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
