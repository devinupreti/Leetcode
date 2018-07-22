class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        if (nums.size()== 0) { return 0; }
        int max_sum = nums[0];
        int max_sum_here = nums[0];
        
        for (int i = 1; i < nums.size(); i++)
        {
            max_sum_here = max(max_sum_here + nums[i], nums[i]);
        	max_sum = max(max_sum_here, max_sum);
        }
        return max_sum;
    }
};