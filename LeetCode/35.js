/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let left = 0;
    let right = nums.length - 1;
    
    while(left <= right){
        let mid = Math.floor((left + ((right-left)/2)));
        if(nums[mid]===target) return mid;
        else if(target < nums[mid]) {
            right = mid-1;
        }
        else{
            left = mid + 1;
        }
    }
    // console.log("left: ", left);
    // console.log("right: ", right);
    return left;
};
