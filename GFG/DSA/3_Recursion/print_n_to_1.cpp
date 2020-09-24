#include <iostream>

using namespace std;

void printTillNum(int n)
{
    if( n==1)
        return;
    else
    {
        cout<<n-1<<"\t";
        printTillNum(n-1);
    }
    
}


void printNum(int n)
{
    if( n==0)
        return;
    else
    {
        cout<<n<<"\t";
        printNum(n-1);
    }
    
}


int main()
{
    printNum(10);
    cout<<"\n";
    printTillNum(10);
    return EXIT_SUCCESS;
}