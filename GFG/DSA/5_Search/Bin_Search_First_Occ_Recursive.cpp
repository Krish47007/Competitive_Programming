#include<bits/stdc++.h>

using namespace std;
/*
int binSearch(int arr[],int beg,int end,int key)
{
    if(beg <= end)
    {
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key)
        {
            int pos = mid;
            int temp = binSearch(arr,beg,mid-1,key);

            return temp != -1 ? temp : pos;
        }
        else if(arr[mid] > key)
            return binSearch(arr,beg,mid-1,key);
        else return binSearch(arr,mid+1,end,key);
    }

    return -1;
}
*/
int binSearch(int arr[],int beg,int end,int key)
{
    if(beg <= end)
    {
        int mid = beg + (end - beg)/2;

        if(arr[mid] == key)
        {
            if(mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else 
                return binSearch(arr,beg,mid-1,key);
        }
        else if(arr[mid] > key)
            return binSearch(arr,beg,mid-1,key);
        else return binSearch(arr,mid+1,end,key);
    }

    return -1;
}
int main()
{
    //int arr[] ={ 1,2,3,4,5,6};
    int arr[] ={ 5,5,5,5,10,10,10,10,30,40,50,50,60};

   cout<<binSearch(arr,0,12,2)<<endl;
    cout<<binSearch(arr,0,12,5)<<endl;
    cout<<binSearch(arr,0,12,10)<<endl;
    cout<<binSearch(arr,0,12,50)<<endl;
    cout<<binSearch(arr,0,12,60)<<endl;
    cout<<binSearch(arr,0,12,70)<<endl;
  
   //cout<<binSearch(arr,0,5,2)<<endl;

    return EXIT_SUCCESS;
}