// Write a function to print first N natural numbers(Tsrn)

#include <stdio.h>
void natural_num(int n){
    int i;
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
}
int main()
{
    int n;

    printf("Enter the value of N :");
    scanf("%d", &n);

    printf("The first %d natural numbers are:", n);
    natural_num(n);
    
    return 0;
}

