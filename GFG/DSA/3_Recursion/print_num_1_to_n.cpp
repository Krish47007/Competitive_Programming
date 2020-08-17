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

int main()
{
    printNos(10);

    return EXIT_SUCCESS;
}


