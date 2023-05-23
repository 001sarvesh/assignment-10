// Write a function to calculate simple interest(TSRS)

#include <stdio.h>
#include <math.h>

float SI(float p, float r , int t){
    float I;
    I = (p*r*t)/ 100 ;
    return I;
}

int main()
{
    float p, r;
    int t;
    printf("Enter the value of p, r and t :");
    scanf("%f %f %d ", &p,&r,&t);
    float I = SI(p, r,t);
    printf("The Simple interest is : %.2f", I);
    return 0;
}