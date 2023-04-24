class Solution {
public:

    // long long int sq(int x){
    //     int s=0;
    //     int e=x;
    //     long long int mid=s+(e-s)/2;
    //     long long int ans=-1;
    //     while(s<=e){
    //         long long int square = mid* mid;
    //         if(square==x){
    //             return mid;
    //         }
    //         if(square<x){
    //             ans=mid;
    //             s=mid+1;
    //         }
    //         else{
    //             e=mid-1;
    //         }
    //         mid=s+(e-s)/2;
    //     }
    //     return ans;
    // }
    int mySqrt(int x) {

        unsigned long int mid,s=0,e=x,ans;

        while(s<=e){
            mid=(s+e)/2;
            if(mid*mid>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }

        return ans;

    }
    
};