class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        // Brute Force appraoch: O(nlogn + mlogm)
        //sort(s.begin(), s.end());
        //sort(t.begin(), t.end());

        //return s == t;

        // Using hashing: Time : O(n), Space: O(1) since char are just 26
        // unordered_map<char, int> countS, countT;

        // for(int i=0;i<s.length();i++) {
        //     countS[s[i]]++;
        //     countT[t[i]]++;
        // }

        // return countS == countT;

        // Using array
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count) {
            if (val != 0)
                return false;       
        }
        return true;
    }
};
