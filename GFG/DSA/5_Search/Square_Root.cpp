#include<bits/stdc++.h>

using namespace std;

/*
int square_root(int x)
{
    int res = 1;

    while (1)
    {
        if( res*res <= x)
            res++;
        else
            break;
    }

    return res-1;
    
}*/

int square_root(int x)
{
    int beg = 1,end = x,res = 0;

    while (beg <= end)
    {
        int mid = beg + (end - beg)/2;
        int sq = mid * mid;

        if( sq == x)
            return mid;
        else if(sq > x)
            end = mid - 1;
        else
        {
            beg = mid + 1;
            res = mid;
        }
    }

    return res;
    
    
}

int main()
{
    cout<<square_root(0)<<endl;
    return EXIT_SUCCESS;
}