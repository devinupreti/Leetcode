class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = -1;
        if (nums.size() == 0) { return -1; }
        if (nums.size() == 1) { if(target == nums[0]){return 0;}  else{return -1;}}
        
        int front = 0;
        int back = nums.size() - 1;
        
        while(front < back)
        {
            if (target == nums[front]) {return front;}
            if (target == nums[back]) {return back;}
            
            if (target > nums[front]) {front++;}
            else if (target < nums[back]){back--;}
            else {break;}
        }
        return index;
    }
};
