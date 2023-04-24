class Solution {
public:
    string removeDuplicates(string str) {

        int n = str.size();

        // declare a stack

        stack<char> st;

        // iterate over the string

        for(int i = 0; i < n; i++)
        {
            // flag will keep track of that we have to push the curr char into stack or not

            bool flag = true;

            // if the curr char == st.top(), then remove the top char and mark flag as false

            if(st.empty() == false && st.top() == str[i])
            {
                flag = false;

                st.pop();
            }

            // if flag is true, push the curr char into stack

            if(flag)
            {
                st.push(str[i]);
            }
        }

        // finally form the res string

        string res = "";

        // pop out all the elements from the stack

        while(!st.empty())
        {
            res += st.top();

            st.pop();
        }

        // reverse the res

        reverse(res.begin(), res.end());

        return res;
    }
};