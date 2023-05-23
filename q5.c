// Write a function to print first N odd natural numbers(TSRN)

#include <stdio.h>

void print_odd_numbers(int n) {
    int i, count = 0;
    
    for (i = 1; count < n; i += 2) {
        printf("%d ", i);
        count++;
    }
    
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("The first %d odd natural numbers are: ", n);
    print_odd_numbers(n);
    
    return 0;
}
