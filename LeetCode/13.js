/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const dict = { 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000};
    let ans=0;
    for(let i=0;i<s.length;i++){
        dict[s[i]] < dict[s[i+1]] ? ans -= dict[s[i]] : ans += dict[s[i]]
    }
    return ans;
};
