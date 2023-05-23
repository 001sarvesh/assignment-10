// Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>

void print_prime_factors(int number) {
    int i;
    
    // Check for 2 as a factor
    while (number % 2 == 0) {
        printf("2 ");
        number /= 2;
    }
    
    // Check for other prime factors
    for (i = 3; i * i <= number; i += 2) {
        while (number % i == 0) {
            printf("%d ", i);
            number /= i;
        }
    }
    
    // Check if the remaining number is greater than 2 (prime factor)
    if (number > 2) {
        printf("%d ", number);
    }
    
    printf("\n");
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("The prime factors of %d are: ", number);
    print_prime_factors(number);
    
    return 0;
}
