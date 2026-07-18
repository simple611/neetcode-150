class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map<int, int> mp;

        // for (int num : nums)
        //     mp[num]++;

        // multimap<int, int, greater<int>> s_mp;

        // for (auto &ele : mp)
        //     s_mp.emplace(ele.second, ele.first);

        // vector<int> res;

        // auto it = s_mp.begin();

        // for (int i = 0; i < k && it != s_mp.end(); ++i, ++it)
        //     res.push_back(it->second);

        // return res;

        // Using min heap
        unordered_map<int,int> count;

        for (int num: nums) {
            count[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        for (auto& it:count) {
            heap.push({it.second, it.first});
            if(heap.size()> k){
                heap.pop();
            }
        }

        vector<int> res;

        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }

        return res;
    }
};
