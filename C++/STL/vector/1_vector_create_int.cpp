#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Vector of integers
    vector<int> integer;

    //Vector initialised with C++11 style list initialisation
    vector<int> listVec{ 10,20,30 };

    //Creating a vector of size 10 but it can still grow
    vector<int> vec(10);

    //Instantiate a vector with 10 elements each one of them is 50
    vector<int> newVec(10,50);

    //Instantiate a vector with the contents of another vector, here, newVec
    vector<int> copyVec(newVec);

    //Instantiate a vector as a partial copy of another vector, here copy 5 elements
    vector<int> partialCopy(newVec.cbegin(), newVec.cbegin() + 5 );


    return 0;
}