class Solution {
public:
    void rotatebyIndex(vector<vector<int>>& matrix, int fromIndex, int toIndex)
    {
        int dimension =  (toIndex + 1) - fromIndex; // rows & cols  
        if (dimension < 2) { return; }
        else if(dimension == 2)
        {
            int temp = matrix[toIndex][toIndex];
            matrix[toIndex][toIndex] = matrix[fromIndex][toIndex];
            matrix[fromIndex][toIndex] = matrix[fromIndex][fromIndex];
            matrix[fromIndex][fromIndex] = matrix[toIndex][fromIndex];
            matrix[toIndex][fromIndex] = temp;
            return;
        }
        else 
        {
            // core = mat[1][1] to mat[dim-2][dim-2]
            rotatebyIndex(matrix, fromIndex+1, toIndex-1);
            
            //clockwise
            int firstcorner  = matrix[toIndex][fromIndex];
            int secondcorner = matrix[fromIndex][fromIndex];
            int thirdcorner = matrix[fromIndex][toIndex];
            int fourthcorner = matrix[toIndex][toIndex];
            
            vector<int> temp;
            vector<int> temp2;
            for(int i = toIndex; i > fromIndex-1; i--)
            { temp.push_back(matrix[i][toIndex]);  }   // last row from last column 
            
            for(int i = fromIndex; i < toIndex+1; i++) 
            { temp2.push_back(matrix[toIndex][i]); } // first column from last row
            
            for(int i = toIndex; i > fromIndex-1; i--)
            { matrix[i][toIndex] = matrix[fromIndex][i]; }// last column  from first row
            
            int j = toIndex;
            for(int i = fromIndex; i < toIndex+1; i++)
            { matrix[fromIndex][i] = matrix[j][fromIndex]; j--; } // first row 
            
            j = 0;
            for(int i = fromIndex; i < toIndex+1; i++)
            { matrix[i][fromIndex] = temp2[j]; j++; } // first column 
            
            j = 0;
            for(int i = fromIndex; i < toIndex+1; i++)
            { matrix[toIndex][i] = temp[j]; j++;} // last row 
            
            //reinforce corners
            matrix[fromIndex][fromIndex] = firstcorner;
            matrix[fromIndex][toIndex] = secondcorner;
            matrix[toIndex][toIndex] = thirdcorner;
            matrix[toIndex][fromIndex] = fourthcorner;
            
        }
    }
    
    void rotate(vector<vector<int>>& matrix) 
    {
        int dimension =  matrix.size(); // rows & cols  
        rotatebyIndex(matrix,0,(dimension-1) );      
    }
};