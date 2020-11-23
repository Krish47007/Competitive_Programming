#include<iostream>

using namespace std;

int countOnes(int arr[],int n)
{
    int ac = 0,temp = 0;
    
    for(int i = 1;i<n;i++)
    {
        if(arr[i] == arr[i-1] && arr[i] == 1)
        {
            temp++;
            if(i==n-1 && temp > ac)
                ac = temp;
        }
        else if(temp > ac)
        {
            ac = temp;
            temp = 0;
        }
    }

    return  ac == 0 ? ac : ac+1;
}

int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<countOnes(arr,n)<<endl;

    return EXIT_SUCCESS;
}