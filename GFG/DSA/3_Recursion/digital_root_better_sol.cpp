#include<iostream>

using namespace std;


int digitalRoot(int n)
{
    if( n < 9)
        return n;
    else
        return n%9 == 0 ? 9 : n%9;
}

int main()
{
    cout<<digitalRoot(12345)<<endl;
    return EXIT_SUCCESS;
}