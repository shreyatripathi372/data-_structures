class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int currsum=0;
        int count=0;
        for(int num:nums){
            currsum+=num;
            //currsum-required=k
            int required=currsum-k;
            if(mp.find(required)!=mp.end()){
                count+=mp[required]; //required=1
            } 
            mp[currsum]++;  //oldprefixsum
        }
        return count;
    }
};