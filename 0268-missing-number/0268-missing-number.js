/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let newNums = new Array();
    nums.sort((a, b) => a - b);
    const size = nums.length;
    for(let i = 0; i <= size; i++) {
        if(nums[i] !== i) return i;
    }
};