#include <stdio.h>

int countequaldivisors(int n) {
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
    printf("Enter a natural number n: ");
    scanf("%d", &n);
    if (n <= 1 || n >= 150) {
        printf("Invalid input.\n");
        return 1;
    }
    int result = countequaldivisors(n);
    printf("The number of equal divisors of %d is: %d\n", n, result);
    return 0;
}
