class Solution {
    public int majorityElement(int[] nums) {
        int length = nums.length;
        int appear = 0;
        Arrays.sort(nums);
        for(int i = 0; i < length; i++) {
            if(appear >= length / 2) {
                return nums[i];
            }

            if(i == 0) {
                appear++;
                continue;
            }
            else if(nums[i] != nums[i - 1]) {
                appear = 1;
                if(i == length - 1)
                    break;
                continue;
            }
            appear++;
        }
        return -1;
    }
}