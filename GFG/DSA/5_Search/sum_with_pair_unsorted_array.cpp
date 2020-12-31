#include<bits/stdc++.h>

using namespace std;


vector<int> getPairWithSum(int arr[],int n,int x)
{
    int p1 = -1,p2 = -1;

    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == x)
            {
                p1 = arr[i];
                p2 = arr[j];
                break;
            }
        }
    }

    vector<int> vec{p1,p2};

    return vec;
}


int main()
{
    int arr[] = {3,5,9,2,8,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 17;
    vector<int> vec = getPairWithSum(arr,n,x);

    cout<<vec[0]<<" "<<vec[1]<<"\n";

    return EXIT_SUCCESS;
}