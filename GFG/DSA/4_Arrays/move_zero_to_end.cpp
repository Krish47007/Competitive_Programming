#include<iostream>

using namespace std;

/*
void swap(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void moveZero(int a[],int n)
{
    int pos = -1;
    bool flag = true;
    for(int i = 0;i<n;i++)
    {
        if(pos != - 1 && a[i] !=0)
        {
            swap(a[pos],a[i]);
            pos = i;
        }
        else if(a[i] == 0 && flag){
            pos = i;
            flag = false;
        }
            
    }
}
*/

void moveZeroToEnd(int arr[],int n)
{
    int count = 0;  //count  of non-zero elements is the 1st index of 0

    for(int i = 0;i<n;i++)
    {
        if(arr[i] != 0) //ignoring 0s
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
        cout<<a[i]<<"\t";
    
    cout<<"\n";
}
int main()
{
    //int arr[]={ 8,2,4,0,3,0,0,7};
    //int arr[]={ 8,2,4,7};
    int arr[]={0,0,0,2,3,0,4,7,0,1,2,0,8};
    //int arr[]={8,5,0,10,0,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeroToEnd(arr,n);

    display(arr,n);

    return EXIT_SUCCESS;
}