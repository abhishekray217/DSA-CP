#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> dp(k,0);
        return solve(cookies,k,0,k,dp);
    }
    int solve(vector<int>& cookies, int k,int index,int zero_count,vector<int> dp){
        if(cookies.size()-index < zero_count){
            return INT_MAX;
        }
        if(index == cookies.size()){
            return *max_element(dp.begin(),dp.end());
        }else{
            int mn = INT_MAX;
            for(int i = 0;i<k;i++){
                zero_count -= dp[i]==0?1:0;
                dp[i] += cookies[index];
                mn = min(mn,solve(cookies,k,index+1,zero_count,dp));
                dp[i] -= cookies[index];
                zero_count += dp[i]==0?1:0;
            }
            return mn;
        }
    }
};

int main(){
    Solution s;
    vector<int> cookies = {8,15,10,20,8};
    int result = s.distributeCookies(cookies,2);
    cout<<result;
    return 1;
}

/*
Test Case -> Result

Input: cookies = [8,15,10,20,8], k = 2
Output: 31

Input: cookies = [6,1,3,2,2,4,1,2], k = 3
Output: 7

*/