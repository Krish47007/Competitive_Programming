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

int main()
{
    cout<<sumOfDigits(1234)<<endl;
    return EXIT_SUCCESS;
}