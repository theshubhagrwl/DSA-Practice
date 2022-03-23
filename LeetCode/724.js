/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    let leftSum=0;sum=0;
    nums.map(item =>(sum+=item));
    for(let i=0;i<nums.length;i++){
        if(leftSum === sum - leftSum - nums[i])
            return i;
        leftSum+=nums[i];
    }
    return -1;
};
