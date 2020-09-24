#include <iostream>

using namespace std;

void swap(int& x,int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void reverseArray(int arr[],int n)
{
   int beg = 0, end = n-1;

   while(beg < end)
   {
       swap(arr[beg++],arr[end--]);
   }
}

void display(int arr[],int n)
{
    for(size_t i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int arr[] = { 10,5,20,34};
    display(arr,4);
    reverseArray(arr,4);
    display(arr,4);
    // -----------------
    int arr2[] = { 10,5,20,34,45};
    display(arr2,5);
    reverseArray(arr2,5);
    display(arr2,5);
    return EXIT_SUCCESS;
}