class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
            
                if(!st.empty() && st.top()==s[i]){
                    while(!st.empty() && st.top()==s[i]){
                            st.pop();
                            i++;
                        }
                        i--;

                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
            string a="";
            while(!st.empty()){
                a+=st.top();
                st.pop();
            }
        reverse(a.begin(),a.end());
        return a;
    }
};

