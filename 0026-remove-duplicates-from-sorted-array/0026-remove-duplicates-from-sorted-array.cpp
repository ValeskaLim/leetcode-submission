class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> new_nums;
        
        // 10
        for(int i = 0; i < nums.size(); i++) {
            if(i == 0 || nums[i] != nums[i - 1]) {
                new_nums.push_back(nums[i]);
            }
        }

        for(int i = 0; i < new_nums.size(); i++) {
            nums[i] = new_nums[i];
        }

        return new_nums.size();
    }
};