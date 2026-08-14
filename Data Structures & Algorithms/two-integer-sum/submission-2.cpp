class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> diff; // difference, index
         
         for (int i=0; i<nums.size(); i++) {
            if (diff.contains(nums[i])){ // check if the value is in it
                return {diff[nums[i]], i};
            }

            diff.insert({target-nums[i], i});
         }
         return {-1, -1};
    }
};
