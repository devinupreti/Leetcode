class Solution {
public:
    vector<int> binarySearch(int first, int last, vector <int>& nums, int target)
    {
        int mid = (first + last)/2;
        if (first == last && nums[mid] != target) { vector<int> ans_bs; ans_bs.push_back(-1); ans_bs.push_back(-1); return ans_bs; }
        
        if (nums[mid] < target ) { if(mid == nums.size()){vector<int> ans_bs; ans_bs.push_back(-1); ans_bs.push_back(-1); return ans_bs;} 
                                   return binarySearch(mid+1, last, nums, target); }
        else if(nums[mid] > target) { if(mid == 0 ) {vector<int> ans_bs; ans_bs.push_back(-1); ans_bs.push_back(-1); return ans_bs;}  
                                     return binarySearch(first, mid-1, nums, target); }
        else
        {
            int start = mid;
            int end = mid;
            bool start_change = true;
            bool end_change = true;
            
            while(start_change || end_change)
            {   
                if(start != 0) { if (nums[mid] == nums[start-1]) { start = start-1;} else { start_change = false;} }
                else { start_change = false;}
                if(end != nums.size()) { if (nums[mid] == nums[end+1]) { end = end + 1;} else { end_change = false;} } 
                else { end_change = false; }
                
            }
            vector<int> ans_bs; ans_bs.push_back(start); ans_bs.push_back(end); return ans_bs;
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector <int> ans;
        if (nums.size() == 0) { ans.push_back(-1); ans.push_back(-1); return ans;  }
        
        int first = 0;
        int last = nums.size() - 1;
        
        ans = binarySearch(first, last, nums, target);
        return ans;
        
    }
};