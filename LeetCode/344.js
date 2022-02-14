var reverseString = function(s) {
    let temp,i=0,j=s.length-1;
    for(i=0, j=s.length-1; i<Math.ceil(s.length/2) && j>=Math.ceil(s.length/2);i++,j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }    
};
