class Solution {
public:
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> answer;
        if(nums.size() == 0) { return answer; }
        else if(nums.size() == 1) 
        { answer.push_back(nums);
          return answer; }
        else if(nums.size() == 2) 
        { vector <int> temp;
          temp.push_back(nums[0]);
          temp.push_back(nums[1]);
          answer.push_back(temp);
          if (nums[0] == nums[1]) { return answer; }
          temp.clear();
          temp.push_back(nums[1]);
          temp.push_back(nums[0]);
          answer.push_back(temp);
          return answer; }
        else
        {
          sort(nums.begin(), nums.end());
          for(int i = 0; i < nums.size(); i++)
          {
              vector <int> temp = nums;
              temp.erase (temp.begin()+i);
              vector<vector<int>> getList = permuteUnique(temp);
              for(int j = 0; j < getList.size(); j++)
              {
                  getList[j].insert(getList[j].begin(),nums[i]);
                  answer.push_back(getList[j]);
              }
              while(nums[i] == nums[i+1]) { i++; }
          }
          return answer;
        } 
    }
};