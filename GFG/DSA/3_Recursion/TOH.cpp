#include <iostream>

using namespace std;

void TOH(int n,char a,char b,char c)
{
    if( n == 1 ){
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<"\n";
        return;
    }        
    TOH(n-1,a,c,b);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<"\n";
    TOH(n-1,b,a,c);
}

// avoid space at the starting of the string in "move disk....."
long long toh(int n, int from_rod, int to_rod, int aux_rod) {
    // Your code here
    
    if(n==1)
    {
        cout<<"move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<"\n";
        return 1;
    }
    
    int r1 = toh(n-1,from_rod,aux_rod,to_rod);
    cout<<"move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<"\n";
    int r2 = toh(n-1,aux_rod,to_rod,from_rod);
    
    return 1 + r1 + r2;
}

int main()
{
    //TOH(20,'A','B','C');
    cout<<toh(3,'A','B','C')<<"\n";
    return EXIT_SUCCESS;
}
