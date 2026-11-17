#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // A proper divisor cannot be greater than num / 2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of proper divisors equals the number
    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
