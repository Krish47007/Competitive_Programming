#include<bits/stdc++.h>

using namespace std;

int binSearch(int arr[],int sz,int key)
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
    //int arr[] ={ 1,2,3,4,5,6};
    int arr[] ={ 5,5,5,5,10,10,10,10,30,40,50,50,60};

   cout<<binSearch(arr,13,2)<<endl;
    cout<<binSearch(arr,13,5)<<endl;
    cout<<binSearch(arr,13,10)<<endl;
    cout<<binSearch(arr,13,50)<<endl;
    cout<<binSearch(arr,13,60)<<endl;
    cout<<binSearch(arr,13,70)<<endl;
  
   //cout<<binSearch(arr,0,5,2)<<endl;

    return EXIT_SUCCESS;
}