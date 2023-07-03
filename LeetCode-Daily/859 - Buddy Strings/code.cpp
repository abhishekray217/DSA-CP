#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // If both have different size then they can never be equal
        if(s.size()!=goal.size()){
            return false;
        }
        // If both are equal then we will check if S contains two same characters or not. here we are doing with the help of set.
        if(s == goal && set<char>(s.begin(),s.end()).size()<goal.size()){
            return true;
        }     
        // Now here we are checking if exactly in two indices of S there are different characters than goal
        int firstIndex = -1,secondIndex = -1;
        for(int i = 0;i<s.size();i++){
            if(s[i]!=goal[i]){
                if(firstIndex == -1){
                    firstIndex = i;
                }else if(secondIndex  == -1){
                    secondIndex = i;
                }else{
                    // It lands here means more than 2 indices have different characters
                    return false;
                }
            }
        }
        // Checking if only 1 index is different or not. if do then we need to return false
        if(secondIndex == -1){
            return false;
        }
        if(s[firstIndex] == goal[secondIndex] && s[secondIndex]==goal[firstIndex]){
            return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    bool result = s.buddyStrings("acvab","acvba");
    cout<<result;
    return 1;
}