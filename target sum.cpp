class Solution {
public:
    int countWays(vector<int>& nums, int target, int index, int sum) {
        
        // All elements are used
        if (index == nums.size()) {
            return (sum == target) ? 1 : 0;
        }

        // Try '+' and '-'
        int add = countWays(nums, target, index + 1, sum + nums[index]);
        int subtract = countWays(nums, target, index + 1, sum - nums[index]);

        return add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return countWays(nums, target, 0, 0);
    }
};
