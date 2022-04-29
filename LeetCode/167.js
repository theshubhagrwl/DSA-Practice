/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    // if(nums.length < 3) return [1, 2];
    // for(let i=0;i<nums.length || nums[i]<=target; i++){
    //     for(let j=i+1;j<nums.length || nums[j]<=target; j++){
    //         if(nums[i] + nums[j] === target){
    //             return [i+1,j+1];
    //         } 
    //     }
    // }
    
    let start = 0;
    let end = nums.length-1;
    
    while(start < end){
        if(nums[start] + nums[end] === target) return [start+1, end+1];
        if(nums[start] + nums[end] > target){
            end--;
        }
        if(nums[start] + nums[end] < target){
            start++;
        }
    }
    
};
