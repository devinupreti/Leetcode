class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
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
          temp.clear();
          temp.push_back(nums[1]);
          temp.push_back(nums[0]);
          answer.push_back(temp);
          return answer; }
        else
        {
          for(int i = 0; i < nums.size(); i++)
          {
              //int elementToadd = nums[i];
              vector <int> temp = nums;
              temp.erase (temp.begin()+i);
              vector<vector<int>> getList = permute(temp);
              for(int j = 0; j < getList.size(); j++)
              {
                  getList[j].insert(getList[j].begin(),nums[i]);
                  answer.push_back(getList[j]);
              }
          }
          return answer;
        } 
    }
};