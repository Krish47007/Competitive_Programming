#include<iostream>
#include<vector>

using namespace std;

void swap(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(vector<int>& vi)
{
    int beg = 0,end = vi.size() - 1;

    while(beg <end)
        swap(vi[beg++],vi[end--]);
}

void leaders(int arr[],int n)
{
    int max = arr[n-1];
    vector<int> vi;

    vi.push_back(arr[n-1]); //Last element is always a leader

    int i = n-2;

    while( i>= 0)
    {
        if(arr[i] > max)
        {
            vi.push_back(arr[i]);
            max = arr[i];
        }
        i--;
    }

    reverse(vi);

    for(int i = 0; i<vi.size();i++)
        cout<<vi[i]<<"\t";
}

int main()
{
    int arr[] = { 7,10,4,10,6,5,2};
    leaders(arr,7);
    cout<<"\n";
    int arr2[] = { 10,20,30};
    leaders(arr2,3);
    cout<<"\n";
     int arr3[] = {1,2,3,4,0};
    leaders(arr3,5);

    return EXIT_SUCCESS;
}