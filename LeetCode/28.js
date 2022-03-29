/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
     if(needle==="") return 0;
    if(haystack==="") return -1;
    if(haystack===needle) return 0;
    if(needle.length > haystack.length) return -1;
        
        let i=0,j=0,flag=false;
        let temp=0;
        
       while (i < haystack.length && j < needle.length) {
    if (haystack[i] === needle[j]) {
      if (flag === false) {
        temp = i;
        flag = true;
      }
      
      i++;
      j++;
      if (j + 1 > needle.length) {
        return temp;
      }
    }
    // flag = false;
    if (haystack[i] !== needle[j]) {
      i-=j;
        i++;
      j = 0;
      flag = false;
    }
  }
        return -1;
};
