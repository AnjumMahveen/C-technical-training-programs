#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Count digits by removing the last digit in each step
    do {
        num /= 10;
        count++;
    } while (num != 0);

    printf("Number of digits: %d\n", count);

    return 0;
}
