#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int result = 0;

    void maxRequest(int n, vector<vector<int>>& requests,vector<int>& indegree,int index,int count){
        if(index == requests.size()){
            for(int i = 0;i<n;i++){
                if(indegree[i]){
                    return;
                }
            }
            result = max(result,count);
            return;
        }
        indegree[requests[index][0]]--;
        indegree[requests[index][1]]++;

        maxRequest(n,requests,indegree,index+1,count+1);

        indegree[requests[index][0]]++;
        indegree[requests[index][1]]--;

        maxRequest(n,requests,indegree,index+1,count);
    }

    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> indegree(n,0);
        maxRequest(n,requests,indegree,0,0);
        return result;
    }
    
};
int main(){
    Solution s;
    vector<vector<int>> requests = {{0,1},{1,0},{0,1},{1,2},{2,0},{3,4}};
    int n = 5;
    int solution = s.maximumRequests(n,requests);
    cout<<solution;
    return 1;
}