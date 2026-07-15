class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for(string s: strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            hash[sorted].push_back(s);
        }

        vector<vector<string>> res;

        for(auto pair: hash) {
            res.push_back(pair.second);
        }
        return res;
    }
};
