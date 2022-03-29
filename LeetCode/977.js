/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    
    let left = 0;
    let right = nums.length-1;
    let curr = nums.length-1;
    let result = new Array(nums.length);
    
    while(left <= right){
        if(nums[left]**2 > nums[right]**2){
            result[curr] = nums[left]**2;
            curr--;
            left++;
        }
        else{
            result[curr] = nums[right]**2;
            curr--;
            right--;
        }
    }
    return result;
    
};
