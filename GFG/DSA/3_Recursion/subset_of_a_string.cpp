#include <iostream>

using namespace std;

void subSet(string& s,string curr,int i)
{
    if( i == s.length())
    {
        cout<<"\""<<curr<<"\""<<"\t";
        return;
    }

    subSet(s, curr + s[i], i+1);    //Appending
    subSet(s,curr, i + 1);  //Dont appending 
    
}


int main()
{
    string input="ABC";
    string curr = "";
    subSet(input,curr,0);

    return 0;
}