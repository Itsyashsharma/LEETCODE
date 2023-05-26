class Solution {
public:
    string generateTheString(int n) {

       //declared an empty string ans 
       string ans = "";

       //FOR ODD LENGTH STRING
       if(n%2!=0) {
           while(n--){
               //return a string of size n formed only by 'a'
               ans+='a';
           }
       } 
       //FOR EVEN LENGTH STRING
       else{
           int m=n-1;
           while(m--){
               //string formed with (n-1) 'a'
               ans+='a';
           }
           // string formed with  1 'b'
           ans+='b';
       }
       return ans;
    }
};