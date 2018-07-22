class Solution {
public: 
    vector<vector<int>> threeSum(int new_target, vector<int>& mod_nums) {
        vector<vector<int>> ans_ts;
        for(int i = 0; i < mod_nums.size(); i++)
        {
            int newest_target = new_target - mod_nums[i];
            int front = i+1;
            int back = mod_nums.size() - 1;
            while(front < back)
            {
                int twosum = mod_nums[front] + mod_nums[back];
                if (twosum > newest_target) { back--; }
                else if (twosum < newest_target) { front++; }
                else 
                {  
                vector<int> triplet(3, 0);
                triplet[0] = mod_nums[i];
                triplet[1] = mod_nums[front];
                triplet[2] = mod_nums[back];
                ans_ts.push_back(triplet);
                
                while (front < back && mod_nums[front] == triplet[1]) front++;
                while (front < back && mod_nums[back] == triplet[2]) back--;
                }
                
            }
            while (i + 1 < mod_nums.size() && mod_nums[i + 1] == mod_nums[i]) 
            i++;
        }
        return ans_ts;
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans_fs;
        vector <int> modified_nums;
        vector<vector<int>> temp;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {   modified_nums = nums;
            modified_nums.erase(modified_nums.begin(), modified_nums.begin()+i+1);
            temp = threeSum(target - nums[i], modified_nums);
            for (int j = 0; j < temp.size(); j++)
            {
                vector <int> quadraple(4,0);
                quadraple[0] = nums[i];
                quadraple[1] = temp[j][0];
                quadraple[2] = temp[j][1];
                quadraple[3] = temp[j][2];
                ans_fs.push_back(quadraple);
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;
        }
        return ans_fs;
    }
};