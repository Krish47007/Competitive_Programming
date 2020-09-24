#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REP_2(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)
#define toDigit(c) (c-'0')

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef vector<int> vi;
typedef pair<int,int> pi;

void printNos(int n)
{
    //Your code here
    if( n == 0)
        return;
    else
    {
        printNos(n-1);
        cout<<n<<" ";
    }
    
}
// Tail recursive version
// k initialised to 1
void printNos(int n,int k)
{
    if( n == 0)
        return;
    cout<<k<<" ";
    printNos(n-1,k+1);
}

void printTillNum(int n)
{
    //Your code here
    if( n == 1)
        return;
    else
    {
        printTillNum(n-1);
        cout<<n-1<<" ";
    }
    
}

int main()
{
    printNos(15);
    cout<<"\n";
    printTillNum(15);
    cout<<"\n";
    printNos(15,1);

    return EXIT_SUCCESS;
}


