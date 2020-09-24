#include<iostream>

using namespace std;

int getWater(int arr[],int n)
{
    int res = 0;

    for(int  i = 1;i<n-1;i++)   //End bars can't hold any water
    {
        int lMax = arr[i];

        for(int j = 0;j<i;j++)
            lMax = max(lMax,arr[j]);
        
        int rMax = arr[i];

        for(int j = i + 1;j<n;j++)
            rMax = max(rMax,arr[j]);
        
        res += (min(lMax,rMax) - arr[i]);
    }

    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<getWater(arr,n)<<endl;

    return EXIT_SUCCESS;
}