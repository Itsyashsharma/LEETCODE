class Solution {
public:
    int strStr(string haystack, string needle) {
        // edge cases 
        if(haystack.length() < needle.length()) return -1;
        if(haystack == needle) return 0;
        
        for(int i=0;i < haystack.length()-needle.length()+1;i++){
            // core condition
            if(haystack.substr(i,needle.length()) == needle){
                return i;
            }
        }
        return -1;
    }
};