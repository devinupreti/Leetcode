class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;
        
        sort(nums.begin(), nums.end());
        
        int twosum;
        
        for (i = 0; i< nums.size(); i++)
        {
            int target = -nums[i];
            int front = i + 1;
            int back = nums.size() - 1;

            while(front<back)
            {
                twosum = nums[front] + nums[back];
                if (twosum > target) { back--; }
                else if(twosum < target) { front++; }
                else{
                    vector<int> triplet(3, 0);
                triplet[0] = nums[i];
                triplet[1] = nums[front];
                triplet[2] = nums[back];
                ans.push_back(triplet);
                
                // Processing duplicates of Number 2
                // Rolling the front pointer to the next different number forwards
                while (front < back && nums[front] == triplet[1]) front++;

                // Processing duplicates of Number 3
                // Rolling the back pointer to the next different number backwards
                while (front < back && nums[back] == triplet[2]) back--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;
        }
        return ans;
    }
};