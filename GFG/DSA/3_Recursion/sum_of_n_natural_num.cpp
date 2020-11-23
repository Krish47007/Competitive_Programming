#include<iostream>

using namespace std;

int sum(int n)
{
    if( n == 0)
        return 0;
    return n + sum(n-1);
}

//Tail recursive version
// k initialised to 0 
int sum(int n,int k)
{
    if(n==0)
        return k;
    return sum(n-1,n+k);
}
int main()
{
    cout<<sum(15)<<endl;
    cout<<sum(15,0)<<endl;
    return EXIT_SUCCESS;

}