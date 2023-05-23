// Write a function to calculate the number of arrangements one can make from n items
// and r are selected at a time (TSRS)

#include <stdio.h>

long long calculate_combinations(int n, int r) {
    long long numerator = 1, denominator = 1;
    int i;
    
    // Calculate numerator: n * (n - 1) * ... * (n - r + 1)
    for (i = n; i >= n - r + 1; i--) {
        numerator *= i;
    }
    
    // Calculate denominator: r!
    for (i = 1; i <= r; i++) {
        denominator *= i;
    }
    
    // Calculate combinations: nCr = numerator / denominator
    long long combinations = numerator / denominator;
    
    return combinations;
}

int main() {
    int n, r;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter the value of r: ");
    scanf("%d", &r);
    
     long long num_combinations = calculate_combinations(n, r);
    
    printf("The number of combinations for selecting %d items from %d items is: %llu\n", r, n, num_combinations);
    
    return 0;
}
