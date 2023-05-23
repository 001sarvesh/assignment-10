// Write a function to check whether a given number contains a given digit or not (TSRS)

// bool isc(int n,int x)
// {
// while(n>0)
// {
//     int a = n%10;
//     if(x==a)
//     {
//         return true;
//         break;
//     }
//     n = n/10;
// }
// return false;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,x;
//     cin >> n >> x;
//     bool ans = isc(n,x);
//     if(ans==1)
//     {
//         cout << "Yes" << endl;
//     }
//     if(ans==0)
//     {
//         cout << "No" << endl;
//     }
//   return 0 ;
// }

#include <stdio.h>

int iscontain(int n, int x)
{
    while (n > 0)
    {
        int a = n % 10;
        if (x == a)
        {
            return 1;
            break;
        }
        n = n / 10;
    }
    return 0;
}

int main()
{
    int n, x;
    printf("Enter the value of number n and digit x:");
    
    scanf("%d %d", &n, &x);
    int ans = iscontain(n, x);
    if (ans == 1)
    {
        printf("Yes");
    }
    if (ans == 0)
    {
        printf("No");
    }

    return 0;
}
