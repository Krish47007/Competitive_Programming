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


int reverse(int n,int rev)
{
    if(n <= 9)
        return rev*10 + n;

    return  reverse(n/10,rev*10 + n%10);

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<reverse(reverse(x,0) + reverse(y,0),0)<<"\n";
    }

    return EXIT_SUCCESS;
}



