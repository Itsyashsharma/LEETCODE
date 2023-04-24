class Solution {
public:
    int compress(vector<char>& chars) {
        int a=0;
        int ans=0;
        int n =chars.size();
        while(a<n){
            int j =a+1;
            
            while(j<n && chars[a]==chars[j]){
                j++;
            }
            chars[ans++]=chars[a];
            
            int count =j-a;
            if(count>1){
                string cht = to_string(count);
            for(char ch:cht){
                chars[ans++]= ch;
            }
           
            
            }
             a=j;
            
        }
        return ans;
    }
};