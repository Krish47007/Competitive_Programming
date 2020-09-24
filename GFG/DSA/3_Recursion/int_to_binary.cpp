#include <iostream>


using namespace std;

void toBinaryString(int n)
{
    if(n==0)
        return;
    else
    {
       toBinaryString(n/2);
       cout<<n%2;

    }
    
}

int main()
{
    toBinaryString(12);
   
    return EXIT_SUCCESS;
}