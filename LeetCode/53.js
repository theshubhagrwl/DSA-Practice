/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let max = nums[0];
    let sum = Math.max(0 ,max);
    for(let i=1;i<nums.length;i++){
        sum+=nums[i];
        max = Math.max(sum, max);
        if(sum < 0) sum = 0
    }
    return max;
};
