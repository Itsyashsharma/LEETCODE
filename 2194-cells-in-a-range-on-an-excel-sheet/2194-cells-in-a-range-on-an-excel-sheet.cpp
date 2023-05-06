class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        char startCol = s[0];
        char endCol = s[3];
        int startIndex = s[1];
        int endIndex = s[4];

        for(char i = startCol; i<= endCol; i++)
            for(char j = startIndex ; j <= endIndex; j++)
                result.push_back(string(1,i)+j);
            

       return result; 
    }
};