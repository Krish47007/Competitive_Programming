#include<bits/stdc++.h>

using namespace std;

int binSearch(int arr[],int sz,int key)
{
    int beg = 0,end = sz-1;    

    while (beg <= end)
    {
        int mid = beg + (end - beg)/2;
        
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            end = mid - 1;
        else
            beg = mid + 1;

         
    }

    return -1;
    
}

int main()
{
    int arr[] ={ 1,2,3,4,5};

    cout<<binSearch(arr,5,5)<<endl;
    cout<<binSearch(arr,5,3)<<endl;
    cout<<binSearch(arr,5,1)<<endl;
    cout<<binSearch(arr,5,4)<<endl;

    int arr2[] = {10,10};

    cout<<binSearch(arr2,2,11)<<endl;

    return EXIT_SUCCESS;
}