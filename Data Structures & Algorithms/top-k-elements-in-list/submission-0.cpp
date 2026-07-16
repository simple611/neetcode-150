class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for (int num : nums)
            mp[num]++;

        multimap<int, int, greater<int>> s_mp;

        for (auto &ele : mp)
            s_mp.emplace(ele.second, ele.first);

        vector<int> res;

        auto it = s_mp.begin();

        for (int i = 0; i < k && it != s_mp.end(); ++i, ++it)
            res.push_back(it->second);

        return res;
    }
};
