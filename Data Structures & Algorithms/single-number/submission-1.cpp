class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(auto &x:nums){
            mp[x]++;
        }
        for(auto &b:mp){
            if(b.second==1) return b.first;
        }
    return 0;
    }
};
