#include<iostream>

using namespace std;

long long fib(int n)
{
    if( n == 0)
        return 0;
    else if( n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);    
}

int main()
{
    cout<<fib(20)<<endl;
    return EXIT_SUCCESS;
}