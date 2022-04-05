/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let left=0;
    let right = height.length-1;
    let smallSide = 0;
    let area = 0;
    let res = 0;
    
    while(left < right){
        smallSide = Math.min(height[left], height[right]);
        area = (right-left) * smallSide;
        
        if(area > res) res = area;
        
        if(height[left] < height[right]) {
            left++;
        }else{
            right--;
        }
    }
    
    return res;
    
};
