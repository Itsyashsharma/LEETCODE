class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        int maxi=-1;
        int i=0,j=0;
        int len=sentences.size();
        while(i<len){
            if(sentences[i][j]==' '){
                count++; 
                j++;
            }
            else if(sentences[i][j]=='\0'){
                i++,j=0;
                maxi= max(maxi,count+1);
                count=0;
            }
            else{
                j++;
            }
        }
        return maxi;
    }
};

