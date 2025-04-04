class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq_map;
    for (int num : nums) {
        freq_map[num]++;
    }

    map<int, vector<int>> sorted_map;
    for (auto& [num, freq] : freq_map) {
        sorted_map[freq].push_back(num);
    }

    vector<int> result;
    for (auto it = sorted_map.rbegin(); it != sorted_map.rend() && result.size() < k; ++it) {
        for (int num : it->second) {
            result.push_back(num);
            if (result.size() == k) return result;
        }
    }

    return result;
}
};