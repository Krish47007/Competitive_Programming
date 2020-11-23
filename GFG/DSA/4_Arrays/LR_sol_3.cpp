#include <iostream>

using namespace std;

void swap(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int arr[],int beg,int end)
{
    while(beg < end)
        swap(arr[beg++],arr[end--]);
}

void leftRotate(int arr[],int n,int d)
{
    d%=n;

    reverse(arr,0,d-1); //Reverse 1st d elements
    reverse(arr,d,n-1); // Reverse n-d elements
    reverse(arr,0,n-1);

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
        d can be any value
    */
    
    leftRotate(arr,n,d);
    display(arr,n);

    return EXIT_SUCCESS;
}