#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LOOP(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)
#define toDigit(c) (c-'0')
#define toCharacterDigit(n) (n + '0')
#define modVal(a)  a % 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

void printNum()
{
    int n;
    cin>>n;

    if(n == 42)
        return;
    
    cout<<n<<"\n";
    printNum();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    printNum();
    return EXIT_SUCCESS;
}



