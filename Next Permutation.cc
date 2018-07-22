class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag = 0;
        for (int i = 0; i < nums.size()-1; ++i)
        { if (nums[i+1] > nums[i]) { flag = 1;} } // all numbers are in descending order if flag remains 0
        
        if (flag == 0) { sort(nums.begin(), nums.end()); }
        else
        {
            flag = 0;
            int position_to_swap = 0; // Initialisation
            for (int i = nums.size() - 1;  i > 0 ; i-- )
            { if (nums[i-1] < nums[i]) { position_to_swap = i-1; break; }  }
            
            int position_smallest = position_to_swap + 1; // Initialisation
            for(int i = position_to_swap+1; i < nums.size(); ++i)
            { if( nums[position_smallest] > nums[i] && nums[position_to_swap] < nums[i]) { position_smallest = i; } }
            
            //swapping
            int temp = nums[position_smallest];
            nums[position_smallest] = nums[position_to_swap];
            nums[position_to_swap] = temp;
            
            sort(nums.begin()+position_to_swap+1, nums.end());
            
        }
        
        
    }
};