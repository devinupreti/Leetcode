class Solution {
public:
    
    void find_combination(int current_sum, int add_value, int target, vector<int> current_vec, vector <vector<int> > & ans, vector<int> & candidates, int index)
{
	if (current_sum + add_value > target) { return; }
	else if (current_sum + add_value == target) { current_vec.push_back(add_value);
												  //sort(current_vec.begin(), current_vec.end());
												  ans.push_back(current_vec);
												  	  return; 
												  //if( find(ans.begin(),ans.end(), current_vec) == ans.end() ) 
												  	//{ 
												  	  
												  	//}
												  //else { return; }
												 }
	else{
		current_vec.push_back(add_value);
		current_sum = current_sum + add_value;
		for(int i = index; i < candidates.size(); i++)
		{
			int new_add_value = candidates[i];
			find_combination(current_sum, new_add_value, target, current_vec, ans, candidates, i);
		}
	}
}

    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector<int> > ans;
        sort(candidates.begin(), candidates.end());
        for(int i = 0; i < candidates.size(); ++i)
	    {
        if(candidates[i] > target) { break; }
		int add_value = candidates[i];
		std::vector<int> empty_vec;
		find_combination(0, add_value, target, empty_vec, ans, candidates, i);
	    }
        return ans;
    }
};