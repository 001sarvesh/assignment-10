// Write a function to calculate factorial of a number (TSRS)

#include <stdio.h>

long long calculate_factorial(int number) {
    unsigned long long factorial = 1;
    int i;
    
    for (i = 1; i <= number; i++) {
        factorial = factorial*i;
    }
    
    return factorial;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
     long long factorial = calculate_factorial(number);
    
    printf("The factorial of %d is: %llu\n", number, factorial);
    
    return 0;
}
