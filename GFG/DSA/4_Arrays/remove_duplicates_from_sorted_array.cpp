#include <iostream>

using namespace std;

// Naive Solution
int removeDuplicate(int arr[],int n)
{
    int temp[n]; //creating a temp array
    temp[0] = arr[0]; //1st element will always be there
    int res = 1; //New size

    for(int i = 1;i<n;i++)
    {
        if(temp[res-1] != arr[i])
            temp[res++] = arr[i];   
    }

    //Copying elements
    for(int i = 0;i<res;i++)
        arr[i] = temp[i];
    
    return res;
}

int remDup(int arr[],int n)
{
    int res = 1;

    for(int i = 1;i<n;i++)
    {
        if(arr[ res - 1 ] != arr[i])
            arr[res++] = arr[i];
    }

    return res;
}


void display(int arr[],int n)
{
    for(size_t i = 0;i<n;i++)
        cout<<arr[i]<<"\t";
}
int main()
{
    int arr[] ={ 10,20,20,30,30,30};
    display(arr,remDup(arr,6));
    cout<<"\n";
    int arr2[] ={ 10,10,10};
    display(arr2,remDup(arr2,3));
    return EXIT_SUCCESS;
}
