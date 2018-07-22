class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int y = nums.size();
       if (y == 0) { return 0; }
       for (int i = 0; i< nums.size(); i++)
       {   
           if(nums[i] == val) { y = y-1;
                                nums.erase(nums.begin()+i);
                                i = i-1;
                                }
       }
       return y;
    }
};