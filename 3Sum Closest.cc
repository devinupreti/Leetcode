class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int i = 0;
        int threesum;
        vector<int> store_a;
        vector<int> store;
        for(i=0; i<nums.size(); i++)
        {
            int front = i+1;
            int back = nums.size() - 1;
            
            while(front<back)
            { 
                threesum = nums[i] + nums[front] + nums[back];
                store.push_back(abs(threesum-target));
                store_a.push_back(threesum);
                if(threesum == target) { return threesum; }
                if(threesum > target) { back--; }
                else { front++; }
            }
        }
        int comp = INT_MAX;
        int ans;
        for(i=0; i<store.size(); i++)
        { 
            if (comp > store[i]) { comp = store[i] ; ans = store_a[i]; }
        }
        return ans;
    }
};