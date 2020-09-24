/*
Power Set Using Recursion 
You are given a string. You need to print the lexicographically sorted power-set of the string.
Note: The string s contains lowercase letter of alphabet.

Example 1:

Input:
s = a
Output: a
Explanation: empty string and a 
are only sets.
Example 2:

Input:
s = abc
Output: a ab abc ac b bc c
Explanation: empty string, 
a, ab, abc, ac, b, bc, c 
are the sets.
Your Task:
You don't need to read input or print anything. You only need to complete the function powerSet that takes string s as parameter and returns a list of subsets. The lexicographic-sorting and printing is done automatically by the driver code.

Expected Time Complexity: O(2|s|).
Expected Auxiliary Space: O(|s|). 

Constraints:
1 <= |s| <= 10

*/



#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void powSet(vector<string>& v,string& s,string curr,int index)
{
    if(index == s.length())
    {
        v.push_back(curr);
        return;
    }
    
    powSet(v,s,curr,index + 1);
    powSet(v,s,curr + s[index],index + 1);
}

vector <string> powerSet(string s)
{
   vector<string> v;
   
   powSet(v,s,"",0);
   
   return v;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        vector<string> ans = powerSet(s);
        sort(ans.begin(),ans.end());

        for(auto x : ans)
            cout<<x<<" ";
        cout<<"\n";
    }
    
}