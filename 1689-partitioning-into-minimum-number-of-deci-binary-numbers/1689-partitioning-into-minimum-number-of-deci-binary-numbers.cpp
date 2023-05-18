class Solution {
public:
    int minPartitions(string n) {
        int temp = 0;
        int max =-1;
        for(auto i: n){
            temp = i-48;
            if(temp==9){
                max=9;
                break;
            }
            if(temp>max){
                max=temp;
            }
        }
        return max;
    }
};