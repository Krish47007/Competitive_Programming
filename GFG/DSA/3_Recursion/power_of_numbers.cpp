#include <iostream>

using namespace std;

long long power(int n,int r)
{
  if( r == 0)
        return 1;
    
    return n % 1000000007 * power(n,r-1) % 1000000007;
    
}

int main()
{
    cout<<power(361,163)<<"\n";
    return EXIT_SUCCESS;
}