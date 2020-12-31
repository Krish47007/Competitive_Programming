#include<bits/stdc++.h>

using namespace std;

int minMoves(vector<int>& nums, int limit) {
        
        int n = nums.size();
           int sum = nums[0] + nums[n - 1],count = 0;
        
        
        for(int  i = 1;i<n/2;i++)
        {
            if( sum != nums[i]+nums[n-1-i])
            {
                int diff = sum - nums[i] + nums[n-1+-i];
                
                if(( nums[i] + diff) < limit && (nums[i]+diff+nums[n-1-i] == sum))
                    nums[i] = nums[i]+diff;
                else
                    nums[n-1-i]  = nums[n-1-i] + diff;
                
                count++;
                i--;
            }
        }
        
        return count;
    }

    int main()
    {
        return EXIT_SUCCESS;
    }