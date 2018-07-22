class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        
        for (i=1; i < nums.size(); i++)
        {   
            for(j= 0; j < i ; j++ )
            {
                if( nums[j] == nums[i] ) { nums.erase(nums.begin()+i);
                                           i = i-1;
                                           break;
                                         }
            }     
        }
        return nums.size();
    }
};