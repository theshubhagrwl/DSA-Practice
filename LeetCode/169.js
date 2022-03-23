/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    nums.sort((a,b)=> a-b)
    console.log(nums[nums.length/2])
    return nums[nums.length/2]
};
