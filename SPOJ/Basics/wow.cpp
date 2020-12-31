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

string getO(int x)
{
    if(!x)
        return "";
    return "o" + getO( x - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<"W"<<getO(x)<<"w"<<"\n";

    return EXIT_SUCCESS;
}



