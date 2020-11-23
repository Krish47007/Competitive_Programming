#include <iostream>

using namespace std;

bool isSorted(int a[],int n)
{
    if(n==1)
        return true;
    
    if(a[n-1] < a[n-2])
        return false;
    
    return isSorted(a,n-1);
}

int main()
{
    int arr[] = {200,100};
    cout<<isSorted(arr,sizeof(arr)/sizeof(arr[0]));
    return EXIT_SUCCESS;
}