class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // hash table
        std::unordered_map<int,int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        for(auto num : hash){
            if(num.second >= 2)
            return true;
        }
        return false;
    }
};