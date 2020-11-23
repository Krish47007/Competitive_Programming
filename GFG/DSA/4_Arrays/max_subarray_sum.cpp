#include <iostream>

using namespace std;

int maxSubArraySum(int arr[],int n)
{
    int sum = 0;
    for(int i= 0;i<n;i++)
    {
        int ts = arr[i];

        for(int j = i+1;j<n;j++)
        {
            if(ts+arr[j] > sum)
            {
                ts = ts+arr[j];
                sum =ts;
            }
            else break;
            
        }
    }

    return sum;
}

int main()
{
    //int arr[] = {2,3,-8,7,-1,2,3};
    //int arr[] = {5,8,3};
    int arr[] = {-6,-1,-8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Max. Sub-array sum is : "<<maxSubArraySum(arr,n)<<endl;

    return EXIT_SUCCESS;
}