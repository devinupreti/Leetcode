class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x;
        x = nums.size();
        if (x == 0) {return 0;}
        for(int i = 0; i<nums.size();i++)
        {
            if (target == nums[i]) { return i;}
            else if (target > nums[i] && target < nums[i+1]) { return i+1; }
            else if (target < nums[i]) { return 0; }
        }
        return x;
    }
};