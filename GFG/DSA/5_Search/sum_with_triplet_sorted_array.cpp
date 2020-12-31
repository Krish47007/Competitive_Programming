#include<bits/stdc++.h>

using namespace std;

bool getPair(int arr[],int beg,int end,int x)
{
    while (beg < end)
    {
       int sum = arr[beg] + arr[end];

       if(sum == x)
            return true;
       else if( sum > x)
            end--;
        else
            beg++;
    }
    
    return false;
}

bool tripletExists(int arr[],int n,int x)
{
    for(int i = 0;i<n;i++)
    {
        if(getPair(arr,i+1,n-1,x-arr[i])) //considering arr[i] as one element of triplet
            return true;
    }

    return false;
}

int main()
{
    int arr[] = {2,4,8,9,11,12,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    
    cout<<tripletExists(arr,n,x)<<"\n";

    return EXIT_SUCCESS;
}