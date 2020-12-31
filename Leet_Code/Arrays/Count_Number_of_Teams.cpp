#include<iostream>
#include<vector>

using namespace std;

bool canInclude(int x,int y,int z)
{
    //cout<<x<<" "<<y<<" "<<z<<endl;

        if(( z > y && y > x) || (x > y && y > z))
            return true;
        return false;
}
    
int numTeams(vector<int>& rating) {
        
        int count = 0;
        int n = rating.size();
        
        for(int  i =0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                for(int k = j+1;k<n;k++)
                {
                    if(canInclude(rating[i],rating[j],rating[k]))
                        count++;
                }
            }
        }
        
        return count;
}

int main()
{
    vector<int> v{2,5,3,4,1};
    cout<<numTeams(v)<<"\n";
    //cout<<canInclude(2,3,4)<<"\n";
    return EXIT_SUCCESS;
}