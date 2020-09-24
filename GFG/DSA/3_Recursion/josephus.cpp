#include <iostream>
#include <vector>

using namespace std;

int jos(int n,int k)
{
    if(n==1)
        return 0;
    
    else
        return (jos(n-1,k) + k) % n;
}

int main()
{
    int n = 7,k = 3;
    cout<<jos(n,k)<<"\n";
    return EXIT_SUCCESS;
}