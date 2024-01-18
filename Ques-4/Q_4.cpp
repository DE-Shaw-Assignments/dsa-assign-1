class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int maxi=nums[0];
        int n=nums.size();
        int i=0;
        if(maxi>=n-1)
        {
             return true;
        }
        for(i=0;i<n;i++)
        {
            if(i>maxi)
            {
                break;
            }           
            else
            {
                maxi=max(maxi,nums[i]+i);
                if(maxi>=n-1)
                {
                   return true;
                }
            }
        }
    return false;
    }
};
