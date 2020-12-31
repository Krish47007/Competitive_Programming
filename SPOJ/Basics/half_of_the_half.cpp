#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LOOP(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)
#define toDigit(c) (c-'0')
#define toCharacterDigit(n) (n + '0')

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

string printHalf(string& s,int i)
{
    if(s.length() == 1)
        return s;
    if( i >= s.length()/2)
        return "";
    return s[i] + printHalf(s,i+2);
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
        string s;
        getline(cin,s);

        cout<<printHalf(s,0)<<"\n";
    }

    return EXIT_SUCCESS;
}



