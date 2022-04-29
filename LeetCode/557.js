/**
 * @param {string} s
 * @return {string}
 */

var reverse = function(start, end, arr) {
    let temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

var reverseWords = function(s) {
    let i,j=0;
    let copy = [...s];
    let temp;
    for(i=0;i<s.length;i++){
        if(s[i]===' '){
            reverse(j,i-1,copy)
            j=i+1;
        }
    }
    reverse(j,s.length-1,copy);
    return copy.join('')
};
