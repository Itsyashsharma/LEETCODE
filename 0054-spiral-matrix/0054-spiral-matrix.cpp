class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;
        int row=matrix.size();
        int col=matrix[0].size();
        
        int count=0;
        int total = row*col;
        
        int startrow=0;
        int startcol=0;
        int colend=col-1;
        int rowend=row-1;
        
        while(count<total){
            for(int i=startcol; count<total && i<=colend;i++){
                a.push_back(matrix[startrow][i]); 
                count++;
            }
            startrow++; 
            
            for(int i=startrow;count<total && i<=rowend;i++){
                a.push_back(matrix[i][colend]); 
                count++;
            }
            colend--;
            for(int i=colend;count<total && i>=startcol;i--){
                a.push_back(matrix[rowend][i]);
                count++;
            }
            rowend--;
            for(int i=rowend;count<total && i>=startrow;i--){
                a.push_back(matrix[i][startcol]);  
                count++;
            }
            startcol++;
        }
        return a;
    }
};