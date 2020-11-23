#include <iostream>

using namespace std;

void leftRotateByOne(int arr[],int n)
{
    int i = 0;
    int temp = arr[i];

    while( i < n-1)
    {
        arr[i] = arr[i+1];
        i++;
    }
    arr[n-1] = temp;
}

void display(int arr[],int n)
{
    for(size_t i = 0;i<n;i++)
        cout<<arr[i]<<"\t";
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int d = 3;
    int n = 5;
    /*
        T.C: O(n*d)
        d can be any value
    */
    for(int i =1;i<=d%n;i++)
        leftRotateByOne(arr,n);
    
    display(arr,n);

    return EXIT_SUCCESS;
}