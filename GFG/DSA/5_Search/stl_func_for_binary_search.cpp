#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void m1()
{
    vector<int> v{10,20,30,40,50};
    int x = 32;

    if(binary_search(v.begin(),v.end(),x))
        cout<<x<<" is present"<<endl;
    else 
        cout<<x<<" is not present"<<endl;

    vector<int> v1{1,2,2,2,2,2,2,2,5,6,7,8,9,9,10};
    int y = 4;

    cout<<"1st occurrence of "<<y<<" is : "<<(lower_bound(v1.begin(),v1.end(),y) - v1.begin())<<endl;
    cout<<"Last occurrence of "<<y<<" is : "<<(upper_bound(v1.begin(),v1.end(),y) - v1.begin())<<endl;
}




int main()
{

    m1();
    
    return EXIT_SUCCESS;
}