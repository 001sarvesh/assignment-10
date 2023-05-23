
// Write a function to check whether a given number is even or odd
// return 1 if number is even , otherwise return 0 (TSRS)
#include <stdio.h>

int is_even(int n){
    if (n%2==0)
    {
        return 1; // even
    }
    return 0; // odd
}

int main()
{
    int n,answer;
    printf("Enter a  number to check:");
    scanf("%d",&n);
    answer = is_even(n);
    if(answer == 1){
        printf("%d is an even number\n", n);
    }
    else{
        printf("%d is a odd number\n", n);

    }
    return 0;
}