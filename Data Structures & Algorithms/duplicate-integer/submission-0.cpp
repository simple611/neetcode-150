class Solution {
public:
   //Brute force: check each element with other element
    //bool hasDuplicate(vector<int>& nums) {
    //    int n = nums.size();

    //    for (int i=0;i<n;i++) {
    //        for (int j=0;j<n;j++){
    //            if (i!=j){
    //                if (nums[i] == nums[j])
    //                    return true;
    //            }
    //        }
    //    }
    //    return false;
    //}

    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        set<int> x;

        for (int i=0;i<n;i++){
            auto it = x.find(nums[i]);
            if (it != x.end()) 
                return true;
            else
                x.insert(nums[i]);
        }
        return false;
    }


};