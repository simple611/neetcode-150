class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // TC: O(m* nlog n)
        // SC: O(m * n)
        // unordered_map<string, vector<string>> hash;
        // for(string s: strs) {
        //     string sorted = s;
        //     sort(sorted.begin(), sorted.end());
        //     hash[sorted].push_back(s);
        // }

        // vector<vector<string>> res;

        // for(auto pair: hash) {
        //     res.push_back(pair.second);
        // }
        // return res;

        unordered_map<string, vector<string>> hash;
        for (string s: strs) {
            vector<int> count(26,0);
            for (char c: s){
                count[c-'a']++;
            }

            string key;
            for(int i=0;i<26;i++){
                key += '#' + to_string(count[i]);
            }
            hash[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto pair: hash) {
            res.push_back(pair.second);
        }
        return res;
    }
};
