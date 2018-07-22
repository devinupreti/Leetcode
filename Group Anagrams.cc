class Solution {
public:
    vector<vector<string>> findStrings(vector<vector<int>>& intAns, vector<string>& strs)
{
    vector<vector<string>> answer;
    vector<string> temp;
    for(int i = 0; i < intAns.size(); i++)
    {
        for(int j = 0; j < intAns[i].size(); j++)
        {
            temp.push_back(strs[intAns[i][j]]);
        }
        answer.push_back(temp);
        temp.clear();
    }
    return answer;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
        vector<string> strs2 = strs;
        for(int i = 0; i < strs2.size(); i++)
        { sort(strs2[i].begin(), strs2[i].end()); }
        
        vector<vector<string>> answer;
        vector<string> temp;
        vector<int> intTemp;
        vector<vector<int>> intAns;
        
        for(int i = 0; i < strs2.size(); i++)
        {
            if(find(temp.begin(), temp.end(), strs2[i]) == temp.end()) {
            // not in temp
            intTemp.push_back(i);
            temp.push_back(strs2[i]);
            for(int j = i+1; j < strs2.size(); j++ )
            {
                if(strs2[i] == strs2[j]) 
                { intTemp.push_back(j);  
                }
            }
            intAns.push_back(intTemp);
            intTemp.clear(); 
            }
        }
        answer = findStrings(intAns, strs);
        return answer;
}
};