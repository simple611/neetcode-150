class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //for (int i =0; i<nums.size();i++) {
        //    for(int j= i+1;j<nums.size();j++) {
        //        if(nums[i] + nums[j] == target)
        //            return {i,j};
        //    }
        //}

        //return {};


        // vector appraoch with sorting: T: O(nlogn), S: O(n)
        //vector<pair<int, int>> v(nums.size());

        //for(int i=0;i<nums.size();i++){
        //    v[i].first = nums[i];
        //    v[i].second = i;

            // or, v.push_back({nums[i], i});
        //}

        //sort(v.begin(), v.end());

        //int n = nums.size(), i=0, j= n-1;

        //while(i<j){
        //    if (v[i].first + v[j].first == target) {
        //        return {v[i].second, v[j].second};
        //    } else if (v[i].first + v[j].first > target) 
        //        j--;
        //    else
        //        i++;
        //}

        //return {};

        // HAshiong approach

        unordered_map<int, int> mp;
        for( int i=0; i<nums.size();i++) {
            int val = target - nums[i];

            if(mp.find(val) != mp.end()) {
                return {min(i, mp[val]), max(i, mp[val])};
            } 
            mp[nums[i]] = i;
        }

        return {};
    }
};
