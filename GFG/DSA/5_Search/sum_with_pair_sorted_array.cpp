#include<bits/stdc++.h>

using namespace std;

vector<int> getPair(int arr[],int n,int x)
{
    int p1 = -1,p2 = -1;
    int beg = 0,end = n-1;

    while (beg < end)
    {
        int sum = arr[beg] + arr[end];
        if(sum == x)
        {
            p1 = arr[beg];
            p2 = arr[end];
            break;
        }
        else if(sum > x)
            end--;
        else
            beg++;
    }
    
    vector<int> v{p1,p2};

    return v;

}

int main()
{
    int arr[] = {2,4,8,9,11,12,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 23;
    vector<int> vec = getPair(arr,n,x);

    cout<<vec[0]<<" "<<vec[1]<<"\n";

    EXIT_SUCCESS;
}