#include<bits/stdc++.h>

using namespace std;

int binSearch(int arr[],int beg,int end,int key)
{
    if(beg <= end)
    {
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            return binSearch(arr,beg,mid-1,key);
        else return binSearch(arr,mid+1,end,key);
    }

    return -1;
}

int main()
{
    int arr[] ={ 1,2,3,4,5};

    cout<<binSearch(arr,0,4,5)<<endl;
    cout<<binSearch(arr,0,4,3)<<endl;
    cout<<binSearch(arr,0,4,1)<<endl;
    cout<<binSearch(arr,0,4,4)<<endl;

    int arr2[] = {10};

    cout<<binSearch(arr2,0,0,10)<<endl;

    return EXIT_SUCCESS;
}