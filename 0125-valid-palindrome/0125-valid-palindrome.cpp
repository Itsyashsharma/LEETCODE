class Solution {
    bool isValid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
    
    char islower(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool check(string a){
        int q=0;
        int e= a.length()-1;
        while(q<=e){
            if(a[q] != a[e]){
                return 0;
            }
            else{
                q++;
                e--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        
        for(int i=0;i<s.length();i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }
        cout<<temp<<endl;
            
        for(int i=0;i<temp.length();i++){
             temp[i] = islower(temp[i]);
            }
            cout<<temp;
        return check(temp);
           
        }
    
};
    