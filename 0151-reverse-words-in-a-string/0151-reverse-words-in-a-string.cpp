class Solution {
public:
    string reverseWords(string s) {
        stack<string> str;
        string a = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(!a.empty())
                    str.push(a);
                a ="";
            }
            else{
                a += s[i];
            }
        }
        str.push(a);
        string ans="";
        while(!str.empty()){
            if(!ans.empty())
                ans+=' ';
            ans += str.top();  
            str.pop();
        }
        return ans;
    }
};
