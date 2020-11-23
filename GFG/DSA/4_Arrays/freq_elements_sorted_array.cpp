#include <iostream>

using namespace std;

void printFreq(int arr[],int n)
{
    int f = 1;
    int count = 0;
    for(int i = 1;i<n;i++)
    {
        cout<<++count<<" iteration : i = "<<i<<"\n";
        if(arr[i] == arr[i-1])
            f++;
        else
        {
            cout<<arr[i-1]<<" -> "<<f<<"\n";
            f=1;
            if( i == n-1)
                cout<<arr[i]<<" -> "<<f<<"\n";
            i++;
        }
        
    }
}

int main()
{
    int arr[] = {10,10,20,30};
    printFreq(arr,4);
    return EXIT_SUCCESS;
}