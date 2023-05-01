class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=-1;
        int sum=0;
        int row=accounts.size();
        int col=accounts[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum=sum+accounts[i][j];
                if(sum>max){
                    max=sum;
                }
            }
            sum=0;
        }
        return max;
    }
};