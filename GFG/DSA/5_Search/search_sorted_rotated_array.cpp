#include<bits/stdc++.h>

using namespace std;


int binSearch(int arr[],int beg,int end,int key)
{
    if( beg > end)
        return -1;
    
    int mid = beg + (end - beg)/2;

    if(arr[mid] == key)
        return mid;
    else if(arr[beg] < arr[mid] )   //Left half sorted
    {
        if(arr[beg]<= key && arr[mid-1] >= key)     // Element lies in range
            end = mid - 1;
        else
            beg = mid + 1;
        
    }
    else
    {
        //If left half is not sorted then right half is definitely sorted

        if( arr[mid+1] <= key && arr[end] >= key)
            beg = mid+1;
        else
            end = mid -1;
    }

    return binSearch(arr,beg,end,key);
}


int main()
{
    int arr[]={10,20,40,60,5,8};
    int x = 80; int n = sizeof(arr)/sizeof(arr[0]);

    cout<<binSearch(arr,0,n-1,x)<<endl;


    return EXIT_SUCCESS;
}