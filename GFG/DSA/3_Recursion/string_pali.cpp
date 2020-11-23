#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string& str,int beg,int end)
{
    if(beg >= end)
        return true;
    
    return (str[beg] == str[end]) && isPalindrome(str,beg + 1,end - 1); 
}

int main()
{
    string s = "MADAM";
    if(isPalindrome(s,0,s.length()-1))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return EXIT_SUCCESS;
}