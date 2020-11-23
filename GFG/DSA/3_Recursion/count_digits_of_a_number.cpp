#include<iostream>

using namespace std;

int countDigits(int n)
{
    if( n <= 9)
        return 1;
    else
        return 1 + countDigits(n/10);
    
}

int main()
{
    cout<<countDigits(1458)<<endl;
    
    return EXIT_SUCCESS;
}