class Solution {
public:
    
    bool checkrnc(vector<vector<char>>& board)
    {
        vector <int> temp;    
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {  return false; }
                else
                { temp.push_back(board[i][j]); }
            }
            temp.clear();
        }
        
        for (int j = 0; j < 9; j++)
        {
            for (int i = 0; i < 9; i++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                { return false; }
                else
                { temp.push_back(board[i][j]); }
            }
            temp.clear();
        }
        return true;
    }
    
    bool checkgrid(vector<vector<char>>& board)
    {
        vector <int> temp;
        
        for (int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 0; i < 3; i++)
        {
            for(int j = 3; j < 6; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 0; i < 3; i++)
        {
            for(int j = 6; j < 9; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 3; i < 6; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 3; i < 6; i++)
        {
            for(int j = 3; j < 6; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 3; i < 6; i++)
        {
            for(int j = 6; j < 9; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 6; i < 9; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 6; i < 9; i++)
        {
            for(int j = 3; j < 6; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        for (int i = 6; i < 9; i++)
        {
            for(int j = 6; j < 9; j++)
            {
                if(board[i][j] == '.') { continue; }
                if(find(temp.begin(), temp.end(), board[i][j]) != temp.end())
                {   cout<<"row "<<i<<" ";
                    cout<<"column "<<j<<" ";
                    cout<<board[i][j];
                    return false; }
                else
                { temp.push_back(board[i][j]); } 
            }
        }
        temp.clear();
        
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
      
        return (checkrnc(board) && checkgrid(board) );
    }
};