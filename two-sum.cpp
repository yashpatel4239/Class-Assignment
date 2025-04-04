class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mpp;
        int left = 0;
        while(left < nums.size()) {
            if(mpp.find(target - nums[left]) != mpp.end()) {
                return {mpp[target - nums[left]], left};
            }
            mpp[nums[left]] = left;
            left++;
        }
        return {};
    }
};