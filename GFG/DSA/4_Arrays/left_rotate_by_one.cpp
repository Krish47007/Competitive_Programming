#include<iostream>

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
    leftRotateByOne(arr,5);
    display(arr,5);
    return EXIT_SUCCESS;
}