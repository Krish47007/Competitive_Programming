#include<bits/stdc++.h>

using namespace std;

int firstOcc(int arr[],int size)
{
    int beg = 0,end = size - 1;

    while (beg<=end)
    {
        int mid = beg + (end - beg)/2;

        if(arr[mid] == 1)
        {
            if(mid == 0 || arr[mid-1] != arr[mid])
                return mid;
            else
                end = mid-1;
        }
        else if(arr[mid] > 1)
            end = mid-1;
        else beg = mid+1;
    }

    return -1;
    
}

int main()
{
    int arr[]={0,0,0,0,1,1,1,1,1,1,1};
    int sz= sizeof(arr)/sizeof(arr[0]);

    int first = firstOcc(arr,sz);

    if(first != -1)
        cout<<"Count of 1: "<<sz-first<<endl;
    else
        cout<<"Count of 1: "<<0<<endl;
    
    return EXIT_SUCCESS;

}