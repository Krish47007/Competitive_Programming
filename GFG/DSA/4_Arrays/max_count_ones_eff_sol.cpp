#include<iostream>

using namespace std;

int countOnes(int arr[],int n)
{
    int res = 0,currCount = 0;
    
    for(int i = 0;i<n;i++)
    {
      if(arr[i] == 0)
        currCount = 0;
      else
      {
          currCount++;
          res = max(res,currCount);
      }
      
    }

    return  res;
}

int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<countOnes(arr,n)<<endl;

    return EXIT_SUCCESS;
}