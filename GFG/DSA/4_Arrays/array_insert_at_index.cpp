#include <iostream>

using namespace std;

void insertAtIndex(int arr[], int size, int pos, int element)
{
    //Your code here
    if(pos >= size)
        return;
    
    int i = size-1;
    
    while( i > pos){
        arr[i] = arr[i-1];
        i--;
    }
    
    arr[pos] = element;
}