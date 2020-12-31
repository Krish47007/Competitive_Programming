#include<bits/stdc++.h>

using namespace std;

/*
int peakElement(int arr[],int n)
{
    if( n== 1)
        return arr[0];

    for(int i = 0;i<n;i++)
    {
        if(i==0 && arr[i+1] <= arr[i])
            return arr[i];
        else if(i==n-1 && arr[i-1] <= arr[i])
            return arr[i];
        else if(arr[i-1] <= arr[i] && arr[i] >= arr[i+1])
            return arr[i];
    }

    return -1;
}
*/
int peakElement(int arr[],int n)
{
    int beg = 0,end  = n-1;

    while (beg<=end)
    {
        int mid = beg + (end - beg)/2;

        if( (mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
            return arr[mid];
        else if(arr[mid - 1] >= arr[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }    

    return -1;
}

int main()
{
    int arr[]={5,10,20,15,7};
    //int arr[]={10,20,15,5,23,90,67};
    //int arr[]={80,70,90};
    //int arr[]={20,80,85,90};
    //int arr[]={1,2,3,4,5};
    //int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<peakElement(arr,n)<<endl;

    return EXIT_SUCCESS;
}