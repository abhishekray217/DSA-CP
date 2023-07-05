class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int prev = 0,left = 0,count = 0;
        int index = 0;
        for(index = 0;index<nums.size();index++){
            if(nums[index]){
                count++;
            }else{
                break;
            }
        }
        if(index==nums.size()){
            return index-1;
        }
        index++;
        prev = index;
        int result = max(0,count);
        for(int i = index;i<nums.size();i++){
            if(nums[i]){
                count++;
                result = max(count,result);
            }else{
                result = max(count,result);
                count = i-prev;
                prev = i+1;
            }
            cout<<count<<" ";
        }
        return result;

    }
};