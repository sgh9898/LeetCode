class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(),nums.end());
        return nums.size() > nums_set.size();
    }
};