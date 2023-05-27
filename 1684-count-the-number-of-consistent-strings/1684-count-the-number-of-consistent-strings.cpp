class Solution {
public:
    int countConsistentStrings(string all, vector<string>& w) {
        map<char,int> mp;int d=0,c;
        for(auto i:all)
        {
            mp[i]++;
        }

        for(auto word:w)
        {
            for(auto i: word)
            {
                if(mp.find(i)==mp.end())
                {
                    c=1;
                    break;
                }
            }
            if(c!=1){
            d++;
           }
            c=0;
        }
        return d;        
    }
};