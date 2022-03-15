var nextGreaterElement = function (nums1, nums2) {
  let res = [];
  let flag = 0;
  for (let i = 0; i < nums1.length; i++) {
    flag = 0;
    let index = nums2.indexOf(nums1[i]);
    if (index === nums2.length - 1) {
      res.push(-1);
    } else {
      for (let j = index + 1; j < nums2.length; j++) {
        if (nums2[j] > nums1[i]) {
          res.push(nums2[j]);
          flag = 1;
          break;
        }
      }
      if (!flag) res.push(-1);
    }
  }
  return res;
};
