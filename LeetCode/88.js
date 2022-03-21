var merge = function (nums1, m, nums2, n) {
  let j = 0;
  nums1.splice(m, n);
  for (let i = 0; i < m + n; i++) {
    if (nums1[i] >= nums2[j] && j < n) {
      nums1.splice(i, 0, nums2[j]);
      j++;
    }
  }
  for (let k = j; k < n; k++) {
    console.log(nums2[k]);
    nums1.push(nums2[k]);
  }
};
