#include <iostream>

using namespace std;

int maxProfit(int arr[],int n)
{
    int  p =0;
    for(int i=0;i<n;i++)
    {
        int max = arr[i];
        int pos = -1;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j] > max)
                max = arr[j];
            else
            {
                pos = j;
                break;
            }
            
        }
        if(pos == -1)
        {
            p+=arr[n-1] - arr[i];
            break;
        }else{
            p+=arr[pos-1] - arr[i];
            i = pos - 1;
        }
    }

    return p;
}
int main()
{
    int arr[] = {5,2,1,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxProfit(arr,n)<<"\n";
    return EXIT_SUCCESS;
}