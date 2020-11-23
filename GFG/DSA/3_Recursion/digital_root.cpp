#include <iostream>

using namespace std;

int sumOfDigits(int n)
{
    //Your code here

    if( n <= 9)
        return n;
    else
    {
        return n%10 + sumOfDigits(n/10);
    }
    
}

int digitalRoot(int n)
{
    if( n<= 9)
        return n;
    else
    {
        return digitalRoot(sumOfDigits(n));
    }
}

int main()
{
    cout<<digitalRoot(12345)<<endl;
    return EXIT_SUCCESS;
}