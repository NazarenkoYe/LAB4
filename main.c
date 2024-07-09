#include <stdio.h>

int count_equal_divisors(int n) {
    int count = 0;
    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    printf("Enter a natural number n (1 < n < 150): ");
    scanf("%d", &n);
    if (n <= 1 || n >= 150) {
        printf("Invalid input. The value of n must be between 2 and 149.\n");
        return 1;
    }
    int result = count_equal_divisors(n);
    printf("The number of equal divisors of %d is: %d\n", n, result);
    return 0;
}
