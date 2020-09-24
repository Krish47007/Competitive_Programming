#include <iostream>

using namespace std;

int countSubsetSum(int arr[],int n,int sum)
{
    if(n==0)
        return sum == 0? 1: 0;
    
    return countSubsetSum(arr,n-1,sum) + countSubsetSum(arr,n-1,sum - arr[n-1]); 
    /*
        In one case we're including an element in other case we're not.
        When we're including at that time sum is reduced by that elementand finally when we reach n = 0
        if sum becomes 0 then we know that subset sum is the given sum.
    */
}
int main()
{
    int a[] = {10,20,15};
    int sum = 25;

    cout<<countSubsetSum(a,sizeof(a)/sizeof(a[0]),sum)<<"\n";


}