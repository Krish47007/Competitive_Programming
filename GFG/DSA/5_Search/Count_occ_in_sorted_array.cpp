#include<bits/stdc++.h>

using namespace std;

int firstOcc(int arr[],int sz,int key)
{
    int beg = 0,end = sz-1;

    while(beg <= end)
    {
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key)
        {
            if(mid == 0 || arr[mid-1] != arr[mid])
                return mid;
            else
                end = mid-1;
        }
        else if(arr[mid] > key)
            end = mid-1;
        else
            beg = mid+1;
    }

    return -1;
}

int lastOcc(int arr[],int sz,int key)
{
    int beg = 0,end = sz-1;

    while(beg <= end)
    {
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key)
        {
            if(mid == sz-1 || arr[mid+1] != arr[mid])
                return mid;
            else
                beg = mid + 1;
        }
        else if(arr[mid] > key)
            end = mid-1;
        else
            beg = mid+1;
    }

    return -1;
}

int main()
{
    int arr[]={10,20,20,20,30,40};
    //int arr[] = {8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);

    int x = 20;

    int count = lastOcc(arr,sz,x) - firstOcc(arr,sz,x);

    if(count)
        count++;

    cout<<x<<" occurres "<< count <<" time(s)"<<endl;

    return EXIT_SUCCESS;
}