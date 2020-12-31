#include<bits/stdc++.h>

using namespace std;

/*
int search(int arr[],int x)
{
    int i = 0;

    while (true)
    {
        try
        {
            if(arr[i] == x)
                return i;
            else if(arr[i] > x)
                return -1;
            
            i++;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return -1;
        }
        
    }
    
}
*/

int binSearch(int arr[],int beg,int end,int key)
{ 

    while (beg <= end)
    {
        int mid = beg + (end - beg)/2;
        
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            end = mid - 1;
        else
            beg = mid + 1;

         
    }

    return -1;
    
}
int search(int arr[],int x)
{
    if(arr[0] == x)
        return 0;

    int i = 1;

    while (arr[i] < x){
        cout<<i<<"\n";
        i=i*2;
    }
    if(arr[i] == x)
        return i;
    
    return binSearch(arr,i/2 +1,i-1,x);
    
}


int main()
{
    int arr[] = {1,10,15,20,40,80,90,100,120,500,700,800,900,1000,1500,1600,1700,1800,1900,2100,2150,2456,2678};
    int x = 2100;
    cout<<search(arr,x)<<endl;

    return EXIT_SUCCESS;
}