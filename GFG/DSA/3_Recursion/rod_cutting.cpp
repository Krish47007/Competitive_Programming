#include <iostream>

using namespace std;

int maxCuts(int n,int a,int b,int c)
{
    if( n == 0)
        return 0;
    if( n < 0 )
        return -1;
    
    int res = max(max( maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c)),maxCuts(n-c,a,b,c));

    if(res == -1)
        return -1;

    return res + 1;

}

int main()
{
   // int n=23,a = 11,b=9,c=12;
   int n=9,a = 2,b=4,c=6;

    cout<<"Max number of cuts possible : "<<maxCuts(n,a,b,c)<<endl;
    return EXIT_SUCCESS;
}