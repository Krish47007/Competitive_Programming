#include <iostream>

using namespace std;

void leftRotate(int arr[],int n,int d)
{
    d %=n;
    int temp[d];
    for(int i = 0;i<d;i++)
        temp[i] = arr[i];
    
    int idx = 0;

    for(int i = d;i<n;i++)
        arr[idx++] = arr[i];
    
    idx = 0;

    for(int i = n-d;i<n;i++)
        arr[i] = temp[idx++];


}

void display(int arr[],int n)
{
    for(size_t i = 0;i<n;i++)
        cout<<arr[i]<<"\t";
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int d = 18;
    int n = 5;
    /*
        T.C: O(n)
        S.C: O(n)
        d can be any value
    */
    
    leftRotate(arr,n,d);
    display(arr,n);

    return EXIT_SUCCESS;
}